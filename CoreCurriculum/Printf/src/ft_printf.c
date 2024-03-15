/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:41:22 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/14 18:02:01 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"
#include "../headers/libft.h"

static int ft_handle_placeholders()
{

}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (ft_strchr("cspdiuxX", str[i]))
			{

			}
			else if (str[i] == '%')
				ft_putchar_fd('%', 1);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}