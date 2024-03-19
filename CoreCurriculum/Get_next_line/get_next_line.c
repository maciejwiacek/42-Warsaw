/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:03:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/18 22:29:11 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*stash;
	int		bytes_read;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	bytes_read = 1;
	stash = ft_strdup("");
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
		if (ft_strchr(buffer, '\n') != NULL)
			break ;
	}
	return (stash);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *str = get_next_line(fd);
	if (str) {
		printf("%s", str);
		free(str);
	}
	else
		printf("Fail");
}
