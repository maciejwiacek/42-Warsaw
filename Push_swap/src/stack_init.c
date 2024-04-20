/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:44:53 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 14:25:09 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	free_arr(char *argv[])
{
	size_t	i;

	i = 0;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

t_node	*stack_init(char *argv[], bool is_split)
{
	t_node	*stack;
	t_node	*new_item;
	size_t	i;

	i = !is_split;
	stack = NULL;
	while (argv[i])
	{
		new_item = ft_lstnew(ft_atoi(argv[i]));
		if (!new_item)
		{
			free_stack(&stack);
			return (NULL);
		}
		ft_lstadd_back(&stack, new_item);
		i++;
	}
	if (is_split)
		free_arr(argv);
	return (stack);
}
