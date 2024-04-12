/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:10:19 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/12 09:41:56 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_item;
	t_list	*current_item;

	if (!lst || !f || !del)
		return (NULL);
	current_item = lst;
	new_list = NULL;
	while (current_item)
	{
		new_item = ft_lstnew(f(current_item->content));
		if (!new_item)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_item);
		current_item = current_item->next;
	}
	return (new_list);
}
