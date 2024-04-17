/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:45:56 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/17 14:45:07 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

static void	sort_three(t_node **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->next->content
		&& (*stack_a)->content > (*stack_a)->next->content)
		ra(stack_a);
	if ((*stack_a)->next->content > (*stack_a)->next->next->content)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

static void	sort_four(t_node **stack_a, t_node **stack_b)
{
	size_t	low_pos;

	low_pos = find_lowest_num(*stack_a);
	if (low_pos < 2)
	{
		while (low_pos--)
			ra(stack_a);
	}
	else if (low_pos > 1)
	{
		while (low_pos++ < 4)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	size_t	stack_size;

	stack_size = ft_lstsize(stack_a);
	if (!is_sorted(*stack_a))
	{
		if (stack_size == 2)
			sort_two(stack_a);
		if (stack_size == 3)
			sort_three(stack_a);
		if (stack_size == 4)
			sort_four(stack_a, stack_b);
	}
}
