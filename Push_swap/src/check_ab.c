/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:01:23 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 17:28:50 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

size_t	check_rarb_ab(t_node *stack_a, t_node *stack_b, t_node *item)
{
	size_t	moves;

	moves = find_index(stack_b, item->target);
	if (moves < find_index(stack_a, item))
		moves = find_index(stack_a, item);
	return (moves);
}

size_t	check_rrarb_ab(t_node *stack_a, t_node *stack_b, t_node *item)
{
	size_t	moves;

	moves = find_index(stack_b, item->target);
	if (moves < ft_lstsize(stack_a) - find_index(stack_a, item))
		moves = ft_lstsize(stack_a) - find_index(stack_a, item);
	return (moves);
}

size_t	check_rarrb_ab(t_node *stack_a, t_node *stack_b, t_node *item)
{
	size_t	moves;

	moves = find_index(stack_a, item);
	if (moves < ft_lstsize(stack_b) - find_index(stack_b, item->target))
		moves = ft_lstsize(stack_b) - find_index(stack_b, item->target);
	return (moves);
}

size_t	check_rrarrb_ab(t_node *stack_a, t_node *stack_b, t_node *item)
{
	size_t	moves;

	moves = 0;
	if (find_index(stack_a, item) != 0)
		moves = ft_lstsize(stack_a) - find_index(stack_a, item);
	if (moves < ft_lstsize(stack_b) - find_index(stack_b, item->target))
		moves = ft_lstsize(stack_b) - find_index(stack_b, item->target);
	return (moves);
}
