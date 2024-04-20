/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_number_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:47:27 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 14:57:32 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*find_min(t_node *stack)
{
	t_node	*min_num;
	size_t	stack_len;

	stack_len = ft_lstsize(stack);
	min_num = stack;
	while (stack_len-- > 0)
	{
		if (min_num->number > stack->number)
			min_num = stack;
		stack = stack->next;
	}
	return (min_num);
}

t_node	*find_max(t_node *stack)
{
	t_node	*max_num;
	size_t	stack_len;

	stack_len = ft_lstsize(stack);
	max_num = stack;
	while (stack_len-- > 0)
	{
		if (max_num->number < stack->number)
			max_num = stack;
		stack = stack->next;
	}
	return (max_num);
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

t_node	*find_target(t_node *item, t_node *stack_b)
{
	t_node	*min;
	t_node	*max;

	min = find_min(stack_b);
	max = find_max(stack_b);
	if (item->number < min->number || item->number > max->number)
		return (max);
	while (!(item->number > stack_b->number
			&& item->number < stack_b->prev->number))
		stack_b = stack_b->next;
	return (stack_b);
}
