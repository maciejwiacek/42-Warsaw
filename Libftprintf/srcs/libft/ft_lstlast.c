/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:43:30 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/12 09:41:54 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_item;

	if (!lst)
		return (NULL);
	current_item = lst;
	while (current_item->next != NULL)
		current_item = current_item->next;
	return (current_item);
}
