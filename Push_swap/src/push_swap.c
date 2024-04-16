/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 18:16:39 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"
#include "../libft/includes/printf.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*tmp_a;
	t_node	*tmp_b;

	if (argc < 2)
		return (error());
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!validate_input(argv, argc == 2))
		return (error());
	stack_a = stack_init(argv, argc == 2);
	if (!stack_a)
		return (error());
	stack_b = NULL;
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	rrr(&stack_a, &stack_b);
	tmp_a = stack_a;
	tmp_b = stack_b;
	while (tmp_a && tmp_b)
	{
		ft_printf("A: %d\tB: %d\n", tmp_a->content, tmp_b->content);
		tmp_a = tmp_a->next;
		tmp_b = tmp_b->next;
	}
	free(stack_a);
	return (0);
}
