/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:37 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/20 15:06:39 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>
# include "../libft/includes/printf.h"
# include "../libft/includes/libft.h"

typedef struct s_node
{
	int				number;
	int				price;
	size_t			index;
	struct s_node	*target;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

// GLOBAL UTILS
int		error(void);
void	print_stack(t_node *stack);
void	free_stack(t_node **stack);

// INIT
bool	validate_input(char *argv[], bool is_split);
t_node	*stack_init(char *argv[], bool is_split);

// SORTING
void	sort_stack(t_node **stack_a, t_node **stack_b);

// SORTING UTILS
t_node	*find_min(t_node *stack);
t_node	*find_max(t_node *stack);
size_t	find_index(t_node *stack, t_node *item);
t_node	*find_target(t_node *item, t_node *stack_b);

// PRICE CALC
size_t	check_rarb_ab(t_node *stack_a, t_node *stack_b);
size_t	check_rrarb_ab(t_node *stack_a, t_node *stack_b);
size_t	check_rarrb_ab(t_node *stack_a, t_node *stack_b);
size_t	check_rrarrb_ab(t_node *stack_a, t_node *stack_b);

// INSTRUCTIONS
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

// LIST UTILS
t_node	*ft_lstnew(int nbr);
void	ft_lstadd_front(t_node **stack, t_node *item);
void	ft_lstadd_back(t_node **stack, t_node *item);
size_t	ft_lstsize(t_node *stack);
bool	is_sorted(t_node *stack);

#endif
