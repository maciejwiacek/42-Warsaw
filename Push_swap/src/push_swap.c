/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/17 13:35:18 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"
#include "../libft/includes/printf.h"

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
	sort_stack(&stack_a, &stack_b);
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
