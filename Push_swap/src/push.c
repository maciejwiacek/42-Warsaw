/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:04:14 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 18:11:50 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/printf.h"

static void	push(t_node **src_stack, t_node **dst_stack)
{
	t_node	*tmp;

	if (!(*src_stack))
		return ;
	tmp = (*src_stack)->next;
	(*src_stack)->next = *dst_stack;
	*dst_stack = *src_stack;
	*src_stack = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
