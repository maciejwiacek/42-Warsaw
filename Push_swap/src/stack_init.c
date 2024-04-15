/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:32:27 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/15 16:37:37 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"
#include "../libft/includes/printf.h"

t_node	*stack_init(char *argv[], bool is_split)
{
	t_node	*stack_a;
	size_t	i;

	i = !is_split;
	stack_a = NULL;
	while (argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (stack_a);
}

/*
 * TODO: Possible mem leak with lstnew, have to protect it later!
 */