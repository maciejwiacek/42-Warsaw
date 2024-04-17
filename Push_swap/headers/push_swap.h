/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:37 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/17 09:16:04 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;

t_node	*ft_lstnew(int nbr);
void	ft_lstadd_back(t_node **stack, t_node *new_item);
void	ft_lstadd_front(t_node **stack, t_node *new_item);
size_t	ft_lstsize(t_node **stack);
bool	validate_input(char *argv[], bool is_split);
t_node	*stack_init(char *argv[], bool is_split);
void	free_stack(t_node **stack);
int		error(void);
void	sa(t_node **sa);
void	sb(t_node **sa);
void	ss(t_node **sa, t_node **sb);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	sort_stack(t_node **stack_a, t_node **stack_b);

#endif
