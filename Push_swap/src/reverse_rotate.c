/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:28:26 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 18:14:45 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	*stack = (*stack)->prev;
}

void	rra(t_node **stack_a, bool print)
{
	reverse_rotate(stack_a);
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_node **stack_b, bool print)
{
	reverse_rotate(stack_b);
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b, bool print)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (print)
		ft_printf("rrr\n");
}
