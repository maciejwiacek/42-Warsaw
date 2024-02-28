/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:59:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/28 16:22:45 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	length;
	int	i;
	int	j;

	length = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (size > 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
		size--;
	}
	dst[i] = '\0';
	return (length);
}
