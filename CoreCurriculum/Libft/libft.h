/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:46:01 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/27 17:11:02 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlcpy(char *dst, const char *src, int size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*memmove(void *dest, const void *src, size_t n);

#endif
