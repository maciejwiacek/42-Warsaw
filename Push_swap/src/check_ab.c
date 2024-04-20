/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:01:23 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 15:16:54 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

size_t	check_rarb_ab(t_node *stack_a, t_node *stack_b)
{
	size_t	ind_a;
	size_t	ind_b;
	size_t	moves;

	ind_a = find_index(stack_a, stack_a);
	ind_b = find_index(stack_b, stack_a->target);
	moves = 0;
	moves += ind_a;
	moves += ind_b;
	return (moves);
}

size_t	check_rrarb_ab(t_node *stack_a, t_node *stack_b)
{
	size_t	ind_a;
	size_t	ind_b;
	size_t	len;
	size_t	moves;

	ind_a = find_index(stack_a, stack_a);
	ind_b = find_index(stack_b, stack_a->target);
	len = ft_lstsize(stack_a);
	moves = 0;
	while (ind_a++ < len && ind_b-- > 0)
		moves++;
	while (ind_a++ < len)
		moves++;
	while (ind_b-- > 0)
		moves++;
	return (moves);
}

size_t	check_rarrb_ab(t_node *stack_a, t_node *stack_b)
{
	size_t	ind_a;
	size_t	ind_b;
	size_t	len;
	size_t	moves;

	ind_a = find_index(stack_a, stack_a);
	ind_b = find_index(stack_b, stack_a->target);
	len = ft_lstsize(stack_b);
	moves = 0;
	while (ind_b++ < len && ind_a-- > 0)
		moves++;
	while (ind_b++ < len)
		moves++;
	while (ind_a-- > 0)
		moves++;
	return (moves);
}

size_t	check_rrarrb_ab(t_node *stack_a, t_node *stack_b)
{
	size_t	ind_a;
	size_t	ind_b;
	size_t	len_a;
	size_t	len_b;
	size_t	moves;

	ind_a = find_index(stack_a, stack_a);
	ind_b = find_index(stack_b, stack_a->target);
	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);
	moves = 0;
	while (ind_a++ < len_a && ind_b++ < len_b)
		moves++;
	while (ind_b++ < len_b)
		moves++;
	while (ind_a++ < len_a)
		moves++;
	return (moves);
}