/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:40:52 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/15 14:35:44 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"

static bool	is_valid(char *s)
{
	if ((*s == '+' || *s == '-') && *s + 1 != '\0')
		s++;
	while (ft_isdigit(*s))
		s++;
	if (*s != '\0' && !ft_isdigit(*s))
		return (false);
	return (true);
}

static bool	validate_duplicates(char **argv, bool is_split)
{
	size_t	i;
	size_t	j;

	i = !is_split;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

static bool	validate_limits(char *s)
{
	char	int_max[11];
	char	int_min[12];
	size_t	len;

	ft_strlcpy(int_max, "2147483647", 11);
	ft_strlcpy(int_min, "-2147483648", 12);
	len = ft_strlen(s);
	if (*s == '+')
	{
		s++;
		len--;
	}
	if ((*s == '-' && len >= 11) || (len >= 10))
	{
		if (*s == '-' && (ft_strncmp(s, int_min, 11) > 0 || len > 11))
			return (false);
		if (*s != '-' && (ft_strncmp(s, int_max, 10) > 0 || len > 10))
			return (false);
	}
	return (true);
}

bool	validate_input(char *argv[], bool is_split)
{
	size_t	i;

	if (!argv[0])
		return (false);
	i = !is_split;
	while (argv[i] != 0)
	{
		if (!is_valid(argv[i]))
			return (false);
		if (!validate_limits(argv[i]))
			return (false);
		i++;
	}
	if (!validate_duplicates(argv, is_split))
		return (false);
	return (true);
}
