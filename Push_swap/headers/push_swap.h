/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:37 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/16 12:19:55 by mwiacek          ###   ########.fr       */
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
bool	validate_input(char *argv[], bool is_split);
size_t	arr_size(char **arr);
t_node	*stack_init(char *argv[], bool is_split);
int		error(void);
void	swap_a(t_node **sa);
void	swap_b(t_node **sa);
void	swap_s(t_node **sa, t_node **sb);
void	ft_lstadd_front(t_node **stack, t_node *new_item);
void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);
void	rotate_a(t_node **stack_a);
void	rotate_b(t_node **stack_b);
void	rotate_r(t_node **stack_a, t_node **stack_b);

#endif
