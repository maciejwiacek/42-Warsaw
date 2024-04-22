/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:49:13 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/22 18:02:37 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	assign_target_a(t_node *stack, t_node *item)
{
	t_node	*min;
	t_node	*max;

	min = find_min(stack);
	max = find_max(stack);
	if (min->number > item->number)
	{
		item->target = min;
		return ;
	}
	else if (max->number < item->number)
	{
		item->target = min;
		return ;
	}
	while (stack->number < item->number || stack->prev->number > item->number)
		stack = stack->next;
	item->target = stack;
}

void	rotate_to_top(t_node **stack, t_node *item)
{
	size_t	i;
	size_t	len;

	i = find_index(*stack, item);
	len = ft_lstsize(*stack);
	if (*stack == item)
		return ;
	if (i <= (len / 2))
	{
		while (*stack != item)
			ra(stack);
	}
	else
	{
		while (*stack != item)
			rra(stack);
	}
}
