/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:03:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/24 18:43:30 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
//
//static char	*fill_stash(int fd, char *stash, char *buf)
//{
//	ssize_t	bytes_read;
//	char	*tmp;
//
//	bytes_read = 1;
//	while (bytes_read > 0)
//	{
//		bytes_read = read(fd, buf, BUFFER_SIZE);
//		if (bytes_read < 0)
//			return (NULL);
//		if (bytes_read == 0)
//			break ;
//		buf[bytes_read] = '\0';
//		if (!stash)
//			stash = ft_strdup("");
//		tmp = stash;
//		stash = ft_strjoin(tmp, buf);
//		free(tmp);
//		if (ft_strchr(buf, '\n'))
//			break ;
//	}
//	return (stash);
//}
//
//static char	*create_line(char *line)
//{
//	char	*rest_of_line;
//	size_t	i;
//
//	i = 0;
//	while (line[i] != '\n' && line[i] != '\0')
//		i++;
//	if (line[i] == 0 || line[i + 1] == 0)
//		return (NULL);
//	rest_of_line = ft_substr(line, i + 1, ft_strlen(line + i + 1));
//	if (!rest_of_line)
//		return (NULL);
//	line[i + 1] = '\0';
//	return (rest_of_line);
//}
//
//char	*get_next_line(int fd)
//{
//	static char	*stash = NULL;
//	char		*line;
//	char		*buf;
//
//	if (fd < 0)
//		return (NULL);
//	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
//	if (!buf)
//		return (NULL);
//	line = fill_stash(fd, stash, buf);
//	free(buf);
//	if (!line)
//		return (NULL);
//	stash = create_line(line);
//	return (line);
//}


#include "get_next_line.h"
char    *process_store(char *line)
{
	int i;
	char *rest;
	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i + 1] == 0 || line[i] == 0)
		return (NULL);
	rest = ft_substr(line, i + 1, ft_strlen(line + i + 1));
	if (!rest)
		return (NULL);
	line[i + 1] = '\0';
	return (rest);
}
char    *read_file(int fd, char *store)
{
	char    *buffer;
	char    *tmp;
	int     bytes_read;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!store)
			store = ft_strdup("");
		tmp = store;
		store = ft_strjoin(tmp, buffer);
		free(tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (store);
}
char    *get_next_line(int fd)
{
	static char *store = NULL;
	char        *line;
	if (fd < 0)
		return (NULL);
	line = read_file(fd, store);
	if (!line)
		return (NULL);
	store = process_store(line);
	return (line);
}
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	char *res;
	fd = open("text.txt", O_RDONLY);
	while ((res = get_next_line(fd)))
	{
		printf("%s", res);
		free(res);
	}
	return 0;
}