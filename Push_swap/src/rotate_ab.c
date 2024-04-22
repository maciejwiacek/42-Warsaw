/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:23:23 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/22 13:23:31 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	make_rarb_ab(t_node **stack_a, t_node **stack_b, t_node *item)
{
	while (*stack_a != item && *stack_b != item->target)
		rr(stack_a, stack_b);
	while (*stack_a != item)
		ra(stack_a);
	while (*stack_b != item->target)
		rb(stack_b);
	item->price = 0;
}

static void	make_rrarb_ab(t_node **stack_a, t_node **stack_b, t_node *item)
{
	while (*stack_a != item)
		rra(stack_a);
	while (*stack_b != item->target)
		rb(stack_b);
	item->price = 0;
}

static void	make_rarrb_ab(t_node **stack_a, t_node **stack_b, t_node *item)
{
	while (*stack_a != item)
		ra(stack_a);
	while (*stack_b != item->target)
		rrb(stack_b);
	item->price = 0;
}

static void	make_rrarrb_ab(t_node **stack_a, t_node **stack_b, t_node *item)
{
	while (*stack_a != item && *stack_b != item->target)
		rrr(stack_a, stack_b);
	while (*stack_a != item)
		rra(stack_a);
	while (*stack_b != item->target)
		rrb(stack_b);
	item->price = 0;
}

void	make_rotation_ab(t_node **stack_a, t_node **stack_b, t_node *item)
{
	size_t	i;

	i = item->price;
	if (i == check_rarb_ab(*stack_a, *stack_b, item))
		make_rarb_ab(stack_a, stack_b, item);
	else if (i == check_rarrb_ab(*stack_a, *stack_b, item))
		make_rarrb_ab(stack_a, stack_b, item);
	else if (i == check_rrarb_ab(*stack_a, *stack_b, item))
		make_rrarb_ab(stack_a, stack_b, item);
	else if (i == check_rrarrb_ab(*stack_a, *stack_b, item))
		make_rrarrb_ab(stack_a, stack_b, item);
}
