/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:46:04 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/17 14:18:46 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_print_int(int num)
{
	char	*converted_num;
	int		length;

	converted_num = ft_itoa(num);
	ft_putstr_fd(converted_num, 1);
	length = ft_strlen(converted_num);
	free(converted_num);
	return (length);
}
