/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:09:30 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 12:20:27 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/printf.h"

static void	rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last;

	last = *stack;
	while (last->next)
		last = last->next;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	rotate_a(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rotate_b(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("ra\n");
}

void	rotate_r(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
