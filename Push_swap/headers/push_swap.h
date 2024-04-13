/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:16:37 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/13 11:03:10 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>

typedef struct s_node {
	int				content;
	struct s_node	*next;
} t_node;

t_node	*ft_lstnew(int nbr);
void	ft_lstadd_back(t_node **stack, t_node *new_item);

#endif
