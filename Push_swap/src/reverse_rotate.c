/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:48:50 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 14:19:56 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/printf.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*bef_last;
	t_node	*tmp;

	bef_last = *stack;
	while (bef_last->next->next)
		bef_last = bef_last->next;
	last = bef_last->next;
	tmp = *stack;
	*stack = last;
	(*stack)->next = tmp;
	bef_last = NULL;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
