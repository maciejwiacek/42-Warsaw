/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:27:12 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/16 17:48:51 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include "../headers/printf.h"

static int	ft_count_digits(uintptr_t num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		counter++;
	}
	return (counter);
}

static int	ft_print_hex_ptr(uintptr_t num)
{
	char	*result;
	char	*possible_letters;
	int		num_length;
	int		length;

	possible_letters = "0123456789abcdef";
	num_length = ft_count_digits(num);
	result = (char *)malloc(sizeof(char) * (num_length + 1));
	if (!result)
		return (NULL);
	result[num_length] = '\0';
	while (num_length-- > 0)
	{
		result[num_length] = possible_letters[num % 16];
		num /= 16;
	}
	ft_putstr_fd(result, 1);
	return (ft_strlen(result));
}

int	ft_print_pointer(void *ptr)
{
	uintptr_t	address;

	if (!ptr)
		return(ft_print_str("(nil)"));
	address = (uintptr_t)ptr;
	ft_putstr_fd("0x", 1);
	return (ft_print_hex_ptr(address) + 2);
}
