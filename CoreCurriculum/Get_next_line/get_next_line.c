/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:03:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/20 08:54:43 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static char	*fill_stash(int fd, char *stash, char *buf)
{
	ssize_t	bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		if (bytes_read == 0)
			return (ft_strdup(""));
		if (!stash)
			stash = ft_strdup("");
		stash = ft_strjoin(stash, buf);
		if (ft_strchr(buf, '\n'))
			return (stash);
	}
	return (stash);
}

static char	*create_line(char *stash)
{
	char	*rest_of_line;
	size_t	i;

	i = 0;
	while(stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\0')
		return (NULL);
	rest_of_line = ft_substr(stash, i + 1, ft_strlen(stash + i + 1));
	if (!rest_of_line)
		return (NULL);
	stash[i] = '\0';
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (ft_strchr(stash, '\n'))
	{
		line = ft_strdup(stash);
		stash = create_line(line);
		return (line);
	}
	line = fill_stash(fd, stash, buf);
	free(buf);
	if (!line)
		return (NULL);
	stash = create_line(line);
	return (line);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	int i = 1;
	char *line;
	while (i < 6)
	{
		line = get_next_line(fd);
		printf("Line %d: %s\n", i++, line);
	}
}
