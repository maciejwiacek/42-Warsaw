/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/18 19:19:20 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		error();
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!validate_input(argv, argc == 2))
		error();
	stack_a = stack_init(argv, argc == 2);
	if (!stack_a)
		return (error());
	stack_b = NULL;
	ft_printf("Stack A:\n");
	print_stack(stack_a);
	ft_printf("Stack B:\n");
	print_stack(stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	ft_printf("Stack A:\n");
	print_stack(stack_a);
	ft_printf("Stack B:\n");
	print_stack(stack_b);
//	sort_stack(&stack_a, &stack_b);
//	free_stack(&stack_a);
//	free_stack(&stack_b);
	return (0);
}
