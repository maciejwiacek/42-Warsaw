/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/15 16:36:39 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "../libft/includes/libft.h"
#include "../libft/includes/printf.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;

	if (argc < 2)
		return (error());
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!validate_input(argv, argc == 2))
		return (error());
	if (!(stack_a = stack_init(argv, argc == 2)))
		return (error());
	ft_printf("%d", stack_a->content);
	free(stack_a);
	return (0);
}
