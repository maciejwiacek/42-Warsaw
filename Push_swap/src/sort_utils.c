/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:12:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/22 13:23:25 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_node	*find_cheapest(t_node *stack)
{
	t_node	*cheapest;
	t_node	*current;

	cheapest = stack;
	current = stack->next;
	while (stack != current)
	{
		if (cheapest->price > current->price)
			cheapest = current;
		if (cheapest->price == 0)
			return (cheapest);
		current = current->next;
	}
	return (cheapest);
}
