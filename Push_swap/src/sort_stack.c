/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:32:53 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/18 19:49:09 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	sort_three(t_node **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->next->number
		&& (*stack_a)->number > (*stack_a)->next->number)
		ra(stack_a);
	if ((*stack_a)->next->number > (*stack_a)->next->next->number)
		rra(stack_a);
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a);
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	size_t	stack_len;

	stack_len = ft_lstsize(*stack_a);
	*stack_b = NULL;
	if (is_sorted(*stack_a))
		return ;
	if (stack_len == 3)
		sort_three(stack_a);
}
