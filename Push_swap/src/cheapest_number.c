/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:44:17 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/21 15:26:50 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	assign_targets(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;

	current = *stack_a;
	(current)->target = find_target(current, *stack_b);
	current = current->next;
	while (current != *stack_a)
	{
		current->target = find_target(current, *stack_b);
		current = current->next;
	}
}

static void	calculate_price(t_node **stack_a, t_node **stack_b, t_node *item)
{
	size_t	i;

	i = check_rarb_ab(*stack_a, *stack_b, item);
	if (i > check_rarrb_ab(*stack_a, *stack_b, item))
		i = check_rarrb_ab(*stack_a, *stack_b, item);
	if (i > check_rrarb_ab(*stack_a, *stack_b, item))
		i = check_rrarb_ab(*stack_a, *stack_b, item);
	if (i > check_rrarrb_ab(*stack_a, *stack_b, item))
		i = check_rrarrb_ab(*stack_a, *stack_b, item);
	item->price = i;
}

void	assign_prices(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;

	current = *stack_a;
	assign_targets(stack_a, stack_b);
	calculate_price(stack_a, stack_b, current);
	current = current->next;
	while (current != *stack_a)
	{
		calculate_price(stack_a, stack_b, current);
		current = current->next;
	}
}
