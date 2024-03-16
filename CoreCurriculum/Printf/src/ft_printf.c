/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:41:22 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/16 09:49:30 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"
#include "../headers/libft.h"

static int ft_handle_placeholders(va_list args, char placeholder)
{
	size_t	length;

	length = 0;
	if (placeholder == 'c')
		length = (ft_print_char(va_arg(args, int)));
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	size_t			counter;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			counter += ft_handle_placeholders(args, str[i + 1]);
			i++;
		}
		else
			counter += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (counter);
}