/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:30:43 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 18:19:17 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

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
	check_stacks(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
