/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:59:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/04 14:09:28 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_size;
	size_t src_size;
	int	i;
	int	j;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size < dst_size)
		return (dst_size + src_size);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (size - dst_size - 1 > 0 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
		size--;
	}
	dst[i] = '\0';
	return (dst_size + src_size);
}
