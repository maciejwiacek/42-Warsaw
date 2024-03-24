/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:39:07 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/12 17:45:48 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current_item;

	counter = 0;
	current_item = lst;
	while (current_item != NULL)
	{
		counter++;
		current_item = current_item->next;
	}
	return (counter);
}
