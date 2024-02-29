/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:39:02 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/29 18:42:41 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_start_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] != set[j] && set[j] != '\0')
		{
			j++;
		}
		if (s1[i] != set[j])
			return (i);
		i++;
		j = 0;
	}
	return (i);
}

static int	ft_get_end_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while (s1[i - 1] != '\0')
	{
		while (s1[i] != set[j] && set[j] != '\0')
		{
			j++;
		}
		if (s1[i] != set[j])
			return (i);
		i--;
		j = 0;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	size_t	i;
	char	*tmp;

	start_index = ft_get_start_index(s1, set);
	end_index = ft_get_end_index(s1, set);
	i = 0;
	if (end_index - start_index >= ft_strlen(s1))
		return ("");
	tmp = (char *)malloc(sizeof(char) * (end_index - start_index + 1));
	if (tmp == NULL)
		return (NULL);
	while (start_index < end_index + 1)
	{
		tmp[i] = s1[start_index];
		i++;
		start_index++;
	}
	tmp[i] = '\0';
	return (tmp);
}
