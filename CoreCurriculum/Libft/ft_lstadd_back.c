/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:47:18 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/12 19:13:39 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_item;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current_item = *lst;
	while (current_item->next != NULL)
		current_item = current_item->next;
	current_item->next = new;
	new->next = NULL;
}
