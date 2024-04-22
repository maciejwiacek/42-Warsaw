/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:12:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/22 17:25:08 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*find_cheapest(t_node *stack)
{
	t_node	*cheapest;
	t_node	*current;

	cheapest = stack;
	current = stack->next;
	while (stack != current)
	{
		if (cheapest->price > current->price)
			cheapest = current;
		if (cheapest->price == 0)
			return (cheapest);
		current = current->next;
	}
	return (cheapest);
}

void	push_to_b(t_node **stack_a, t_node **stack_b)
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
}

void	push_to_a(t_node **stack_a, t_node **stack_b)
{
	while (*stack_b)
	{
		assign_target_a(*stack_a, *stack_b);
		rotate_to_top(stack_a, (*stack_b)->target);
		pa(stack_a, stack_b);
	}
	ra(stack_a);
}
