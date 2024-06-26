/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:00:25 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 18:13:58 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	swap(t_node **stack)
{
	int	tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = tmp;
}

void	sa(t_node **stack_a, bool print)
{
	swap(stack_a);
	if (print)
		ft_printf("sa\n");
}

void	sb(t_node **stack_b, bool print)
{
	swap(stack_b);
	if (print)
		ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b, bool print)
{
	swap(stack_a);
	swap(stack_b);
	if (print)
		ft_printf("ss\n");
}
