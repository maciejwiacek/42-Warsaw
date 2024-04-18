/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:26:19 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/18 16:51:25 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*ft_lstnew(int nbr)
{
	t_node	*new_item;

	new_item = malloc(sizeof(t_node));
	if (!new_item)
		return (NULL);
	new_item->number = nbr;
	new_item->next = NULL;
	new_item->prev = NULL;
	return (new_item);
}

void	ft_lstadd_front(t_node **stack, t_node *item)
{
	if (!(*stack))
	{
		item->next = item;
		item->prev = item;
	}
	else
	{
		item->prev = (*stack)->prev;
		item->next = (*stack);
		(*stack)->prev->next = item;
		(*stack)->prev = item;
	}
	*stack = item;
}

void	ft_lstadd_back(t_node **stack, t_node *item)
{
	if (!(*stack))
	{
		item->next = item;
		item->prev = item;
		*stack = item;
	}
	else
	{
		item->prev = (*stack)->prev;
		item->next = (*stack);
		(*stack)->prev->next = item;
		(*stack)->prev = item;
	}
}

size_t	ft_lstsize(t_node *stack)
{
	t_node	*current;
	size_t	i;

	if (!stack)
		return (0);
	if (!stack->next)
		return (1);
	i = 1;
	current = stack->next;
	while (current != stack)
	{
		current = current->next;
		i++;
	}
	return (i);
}