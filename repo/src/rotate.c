/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:20:41 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 18:14:52 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	rotate(t_node **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	*stack = (*stack)->next;
}

void	ra(t_node **stack_a, bool print)
{
	rotate(stack_a);
	if (print)
		ft_printf("ra\n");
}

void	rb(t_node **stack_b, bool print)
{
	rotate(stack_b);
	if (print)
		ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b, bool print)
{
	rotate(stack_a);
	rotate(stack_b);
	if (print)
		ft_printf("rr\n");
}
