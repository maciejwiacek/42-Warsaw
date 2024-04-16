/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:42:33 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 12:51:55 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/printf.h"

static void	swap(t_node *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
}

void	sa(t_node **sa)
{
	swap(*sa);
	ft_printf("sa\n");
}

void	sb(t_node **sb)
{
	swap(*sb);
	ft_printf("sb\n");
}

void	ss(t_node **sa, t_node **sb)
{
	swap(*sa);
	swap(*sb);
	ft_printf("ss\n");
}
