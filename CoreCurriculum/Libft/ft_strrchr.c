/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:30:05 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/01 18:18:30 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	char	*str_cpy;

	s_len = ft_strlen(s);
	str_cpy = (char *)s;
	while (s[s_len] > 0 || s[s_len] == '\0')
	{
		if (s[s_len] == c)
			return (&str_cpy[s_len]);
		s_len--;
	}
	return (NULL);
}
