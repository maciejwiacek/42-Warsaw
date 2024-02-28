/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:56:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/28 15:58:40 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[100000];
	char	*ptr_dest;
	char	*ptr_src;
	int		i;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	ft_strlcpy(tmp, ptr_src, n + 1);
	while (n > 0)
	{
		ptr_dest[i] = tmp[i];
		i++;
		n--;
	}
	return (dest);
}
