/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:45:30 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/27 16:51:59 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest_cpy;
	char	*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	i = 0;
	while (src_cpy[i] != '\0' && n > 0)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
