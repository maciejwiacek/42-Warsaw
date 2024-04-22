/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:32:53 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/22 13:20:45 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a);
}

static void	sort_three(t_node **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->next->number
		&& (*stack_a)->number > (*stack_a)->next->number)
		ra(stack_a);
	if ((*stack_a)->next->number > (*stack_a)->next->next->number)
		rra(stack_a);
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a);
}

static void	sort_big(t_node **stack_a, t_node **stack_b)
{
	t_node	*cheapest;
	size_t	a_len;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	a_len = ft_lstsize(*stack_a);
	while (a_len > 3)
	{
		assign_prices(stack_a, stack_b);
		cheapest = find_cheapest(*stack_a);
		make_rotation_ab(stack_a, stack_b, cheapest);
		pb(stack_a, stack_b);
		a_len--;
	}
	sort_three(stack_a);
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
	if (stack_len > 3)
		sort_big(stack_a, stack_b);
}
