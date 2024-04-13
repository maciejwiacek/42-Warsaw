/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/13 15:08:18 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (1);
	stack_a = malloc(sizeof(t_node));
	stack_b = malloc(sizeof(t_node));
	if (!stack_a || !stack_b)
	{
		free(stack_a);
		free(stack_b);
		return (1);
	}
	if (argc == 2)
	{

	}
}