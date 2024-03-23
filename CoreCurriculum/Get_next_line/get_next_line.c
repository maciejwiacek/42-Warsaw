/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:03:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/23 16:35:19 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static char	*fill_stash(int fd, char *stash)
{
	ssize_t	bytes_read;
	char	*tmp;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		if (bytes_read == 0)
			break ;
		buf[bytes_read] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	return (stash);
}

static char	*create_line(char *stash)
{
	char	*rest_of_line;
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == 0 || stash[i + 1] == 0)
		return (NULL);
	rest_of_line = ft_substr(stash, i + 1, ft_strlen(stash) - i);
	if (*rest_of_line == 0)
	{
		free(rest_of_line);
		return (NULL);
	}
	stash[i + 1] = '\0';
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = fill_stash(fd, stash);
	if (!line)
		return (NULL);
	stash = create_line(line);
	return (line);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	int i = 0;
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line %d: %s\n", i + 1, line);
		free(line);
		i++;
	}
	close(fd);
}

