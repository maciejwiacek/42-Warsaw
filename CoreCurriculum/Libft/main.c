/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:09:49 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/15 14:49:10 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:15:43 by jtoty             #+#    #+#             */
/*   Updated: 2021/02/04 07:53:36 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list	*lst = ft_lstnew("One");
	ft_lstadd_back(&lst, ft_lstnew("Two"));
	ft_lstadd_back(&lst, ft_lstnew("Three"));
	printf("%s", (char *)lst->content);
	ft_lstclear(&lst, ft_del);
	while (lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
}