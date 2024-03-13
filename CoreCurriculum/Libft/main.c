/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:25:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/13 12:01:07 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int		main()
{
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[10] = 'a';
	write(1, dest, 15);
	write(1, "\n", 1);
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	write(1, "\n", 1);
	write(1, dest, 15);
	return (0);
}
