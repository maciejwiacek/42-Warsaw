/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:22:28 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/19 23:54:48 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static char	*fill_stash(int fd, char *stash, char *buf)
{
	ssize_t	bytes_read;
	char	*tmp;

	bytes_read = read(fd, 0, 0);
	while (bytes_read > -1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buf[bytes_read] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		if (ft_strchr(buf, '\n'))
			break;
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
	rest_of_line = ft_substr(stash, i + 1, ft_strlen(stash) - i - 1);
	if (!rest_of_line)
		return (NULL);
	stash[i] = '\0';
	return (rest_of_line);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	static char *stash = NULL;
	char *buf;
	char *line;
	buf = malloc(sizeof(char) * (BUFFER_SIZE));
	line = fill_stash(fd, stash, buf);
	stash = create_line(line);
	line = fill_stash(fd, stash, buf);
	stash = create_line(line);
	printf("%s", line);
}