/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:40:52 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/14 15:09:53 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"
#include "../libft/includes/printf.h"

bool	is_valid(char *s)
{
	if ((*s == '+' || *s == '-') && *s + 1 != '\0')
		s++;
	while (ft_isdigit(*s))
		s++;
	if (*s != '\0' && !ft_isdigit(*s))
		return (false);
	return (true);
}

bool	validate_duplicates(char **argv, bool is_split)
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
		i++;
	}
	if (!validate_duplicates(argv, is_split))
		return (false);
	return (true);
}
