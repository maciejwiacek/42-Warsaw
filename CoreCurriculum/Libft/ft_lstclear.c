/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:31:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/12 19:13:28 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_item;
	t_list	*next_item;

	if (!lst || !(*lst) || !del)
		return ;
	current_item = *lst;
	while (current_item)
	{
		next_item = current_item->next;
		ft_lstdelone(current_item, del);
		current_item = next_item;
	}
	*lst = NULL;
}
