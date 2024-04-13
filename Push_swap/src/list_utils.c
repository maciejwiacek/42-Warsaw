/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:31:16 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/13 15:07:55 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*ft_lstnew(int nbr)
{
	t_node	*new_item;

	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return (NULL);
	new_item->content = nbr;
	new_item->next = NULL;
	return (new_item);
}

void	ft_lstadd_back(t_node **stack, t_node *new_item)
{
	t_node	*current_item;

	if (!stack || !new)
		return ;
	if (*stack == NULL)
	{
		*stack = new_item;
		return ;
	}
	current_item = *stack;
	while (current_item->next != NULL)
		current_item = current_item->next;
	current_item->next = new_item;
}