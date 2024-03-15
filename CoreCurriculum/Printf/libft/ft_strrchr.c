/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:30:05 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/04 19:50:46 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	char	*str_cpy;

	str_cpy = (char *)s;
	if (c == '\0')
		return (str_cpy + ft_strlen(str_cpy));
	s_len = ft_strlen(str_cpy);
	while (s_len > 0)
	{
		s_len--;
		if (str_cpy[s_len] == c)
			return (&str_cpy[s_len]);
	}
	return (NULL);
}
