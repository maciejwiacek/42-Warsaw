/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/18 16:53:29 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
//	t_node	*stack_b;

	if (argc < 2)
		error();
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!validate_input(argv, argc == 2))
		error();
	stack_a = stack_init(argv, argc == 2);
	if (!stack_a)
		return (error());
	print_stack(stack_a);
	ft_printf("Stack size: %d\n", ft_lstsize(stack_a));
	ft_printf("Second item: %d\n", stack_a->next->next->prev->number);
//	stack_b = NULL;
//	sort_stack(&stack_a, &stack_b);
//	free_stack(&stack_a);
//	free_stack(&stack_b);
	return (0);
}
