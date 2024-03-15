/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:56:21 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/13 11:00:04 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_item;

	current_item = lst;
	while (current_item != NULL)
	{
		(*f)(current_item->content);
		current_item = current_item->next;
	}
}