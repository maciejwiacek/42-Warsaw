/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:24:30 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/17 14:46:04 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

size_t	find_lowest_num(t_node *stack)
{
	size_t	i;
	size_t	pos;
	int		low;

	i = 0;
	pos = 0;
	low = stack->content;
	while (stack)
	{
		if (low > stack->content)
		{
			pos = i;
			low = stack->content;
		}
		stack = stack->next;
		i++;
	}
	return (pos);
}

bool	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->content > stack->next->content)
			return (false);
		stack = stack->next;
	}
	return (true);
}
