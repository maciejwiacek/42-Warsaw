/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:50:03 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/29 19:24:12 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 1;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

static int	ft_let_to_sep(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static char	*ft_copy_word(char *s, char c)
{
	char	*word;
	char	*start_word;

	word = (char *)malloc(sizeof(char) * (ft_let_to_sep(s, c)));
	start_word = word;
	while (*s != '\0' && *s != c)
	{
		*word = *s;
		word++;
		s++;
	}
	*word = '\0';
	return (start_word);
}

char	**ft_allocate_arr(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*s_cpy;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	arr = ft_allocate_arr(s, c);
	s_cpy = (char *)s;
	while (s_cpy[i] != '\0')
	{
		while (s_cpy[i] != '\0' && s_cpy[i] == c)
			i++;
		if (s_cpy[i] != '\0')
		{
			arr[j] = ft_copy_word(s_cpy + i, c);
			j++;
		}
		while (s_cpy[i] != '\0' && s_cpy[i] != c)
			i++;
	}
	arr[j] = 0;
	return (arr);
}
