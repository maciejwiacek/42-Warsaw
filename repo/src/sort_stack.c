/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:32:53 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 17:50:13 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a, true);
}

static void	sort_three(t_node **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->next->number
		&& (*stack_a)->number > (*stack_a)->next->number)
		ra(stack_a, true);
	if ((*stack_a)->next->number > (*stack_a)->next->next->number)
		rra(stack_a, true);
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a, true);
}

static void	sort_four(t_node **stack_a, t_node **stack_b)
{
	t_node	*min;

	min = find_min(*stack_a);
	rotate_to_top(stack_a, min);
	pb(stack_a, stack_b, true);
	sort_three(stack_a);
	pa(stack_a, stack_b, true);
}

static void	sort_big(t_node **stack_a, t_node **stack_b)
{
	t_node	*min;

	push_to_b(stack_a, stack_b);
	sort_three(stack_a);
	push_to_a(stack_a, stack_b);
	min = find_min(*stack_a);
	rotate_to_top(stack_a, min);
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	size_t	stack_len;

	stack_len = ft_lstsize(*stack_a);
	*stack_b = NULL;
	if (is_sorted(*stack_a))
		return ;
	if (stack_len == 2)
		sort_two(stack_a);
	if (stack_len == 3)
		sort_three(stack_a);
	if (stack_len == 4)
		sort_four(stack_a, stack_b);
	if (stack_len > 4)
		sort_big(stack_a, stack_b);
}
