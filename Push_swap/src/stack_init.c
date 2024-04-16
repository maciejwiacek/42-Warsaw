/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:32:27 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 18:44:49 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"

static void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*tmp_next;

	tmp = *stack;
	while (tmp)
	{
		tmp_next = tmp->next;
		free(tmp);
		tmp = tmp_next;
	}
}

t_node	*stack_init(char *argv[], bool is_split)
{
	t_node	*stack_a;
	t_node	*new_item;
	size_t	i;

	i = !is_split;
	stack_a = NULL;
	while (argv[i])
	{
		new_item = ft_lstnew(ft_atoi(argv[i]));
		if (!new_item)
		{
			free_stack(&stack_a);
			return (NULL);
		}
		ft_lstadd_back(&stack_a, new_item);
		i++;
	}
	return (stack_a);
}
