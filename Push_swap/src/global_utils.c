/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:29:43 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 14:36:15 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	error(void)
{
	ft_printf("Error\n");
	exit (1);
}

void	print_stack(t_node *stack)
{
	t_node	*current;

	if (!stack)
		return ;
	ft_printf("%d\n", stack->number);
	current = stack->next;
	while (current != stack)
	{
		ft_printf("%d\n", current->number);
		current = current->next;
	}
}

void	free_stack(t_node **stack)
{
	t_node	*current;
	t_node	*next_node;
	size_t	len;

	current = *stack;
	len = ft_lstsize(*stack);
	while (len-- > 0)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*stack = NULL;
}
