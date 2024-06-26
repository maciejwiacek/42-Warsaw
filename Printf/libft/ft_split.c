/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:50:03 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/12 13:03:13 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	counter;

	counter = 1;
	while (*s != '\0')
	{
		if (*s == c)
			counter++;
		s++;
	}
	return (counter);
}

static int	ft_count_to_sep(char *s, char c)
{
	int	counter;

	counter = 0;
	while (s[counter] != c && s[counter] != '\0')
		counter++;
	return (counter);
}

static char	*ft_copy_word(char *s, char c)
{
	char	*word;
	char	*start_word;

	word = (char *)malloc(sizeof(char) * (ft_count_to_sep(s, c) + 1));
	if (word == NULL)
		return (NULL);
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

static void	ft_free_space(char **arr, int j)
{
	while (j-- >= 0)
		free (arr[j]);
	free (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		j;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			arr[j] = ft_copy_word((char *)s, c);
			if (arr[j] == NULL)
				ft_free_space(arr, j - 1);
			j++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	arr[j] = NULL;
	return (arr);
}
