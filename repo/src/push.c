/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:09:37 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/27 17:38:23 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	push(t_node **src_stack, t_node **dst_stack)
{
	t_node	*tmp;
	t_node	*tmp_next;
	t_node	*tmp_prev;

	if (ft_lstsize(*src_stack) < 1)
		return ;
	tmp = *src_stack;
	if ((*src_stack)->next == *src_stack)
	{
		*src_stack = NULL;
		ft_lstadd_front(dst_stack, tmp);
		return ;
	}
	tmp_next = (*src_stack)->next;
	tmp_prev = (*src_stack)->prev;
	tmp_next->prev = tmp->prev;
	tmp_prev->next = tmp->next;
	(*src_stack) = tmp_next;
	ft_lstadd_front(dst_stack, tmp);
}

void	pa(t_node **stack_a, t_node **stack_b, bool print)
{
	push(stack_b, stack_a);
	if (print)
		ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b, bool print)
{
	push (stack_a, stack_b);
	if (print)
		ft_printf("pb\n");
}
