/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:34 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/26 18:09:57 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static bool	handle_instruction(t_node **stack_a, t_node **stack_b, char *s)
{
	if (ft_strncmp(s, "sa\n", ft_strlen(s)) == 0)
		sa(stack_a, false);
	else if (ft_strncmp(s, "sb\n", ft_strlen(s)) == 0)
		sb(stack_b, false);
	else if (ft_strncmp(s, "ss\n", ft_strlen(s)) == 0)
		ss(stack_a, stack_b, false);
	else if (ft_strncmp(s, "pa\n", ft_strlen(s)) == 0)
		pa(stack_a, stack_b, false);
	else if (ft_strncmp(s, "pb\n", ft_strlen(s)) == 0)
		pb(stack_a, stack_b, false);
	else if (ft_strncmp(s, "ra\n", ft_strlen(s)) == 0)
		ra(stack_a, false);
	else if (ft_strncmp(s, "rb\n", ft_strlen(s)) == 0)
		rb(stack_b, false);
	else if (ft_strncmp(s, "rr\n", ft_strlen(s)) == 0)
		rr(stack_a, stack_b, false);
	else if (ft_strncmp(s, "rra\n", ft_strlen(s)) == 0)
		rra(stack_a, false);
	else if (ft_strncmp(s, "rrb\n", ft_strlen(s)) == 0)
		rrb(stack_b, false);
	else if (ft_strncmp(s, "rrr\n", ft_strlen(s)) == 0)
		rrr(stack_a, stack_b, false);
	else
		return (false);
	return (true);
}

void	check_stacks(t_node **stack_a, t_node **stack_b)
{
	char	*instruction;
	bool	is_valid;

	while (1)
	{
		instruction = get_next_line(0);
		if (!instruction)
			break ;
		is_valid = handle_instruction(stack_a, stack_b, instruction);
		free(instruction);
		if (!is_valid)
		{
			ft_printf("KO\n");
			return ;
		}
	}
	if (is_sorted(*stack_a) || !*stack_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
