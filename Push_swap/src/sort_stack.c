/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:45:56 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/17 09:22:02 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

static void	sort_three(t_node **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->next->content)
		ra(stack_a);
	if ((*stack_a)->next->content > (*stack_a)->next->next->content)
		sa(&(*stack_a)->next);
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	size_t	stack_size;

	stack_size = ft_lstsize(stack_a);
	if (stack_size == 2)
		sort_two(stack_a);
	if (stack_size == 3)
		sort_three(stack_a);
	*stack_b = NULL;
}
