/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_number_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:47:27 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 14:04:50 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*find_min(t_node *stack)
{
	t_node *min_num;
	size_t stack_len;

	stack_len = ft_lstsize(stack);
	min_num = stack;
	while (stack_len-- > 0) {
		if (min_num->number > stack->number)
			min_num = stack;
		stack = stack->next;
	}
	return (min_num);
}

size_t	find_index(t_node *stack, t_node *item)
{
	size_t	i;

	i = 0;
	while (stack != item)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
