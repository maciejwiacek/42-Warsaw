/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:12:51 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/04 13:21:43 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_count(int n)
{
	size_t	i;
	size_t	counter;

	i = 1;
	counter = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n / (10 * i) > 0)
	{
		i *= 10;
		counter++;
	}
	return (counter);
}

static void	ft_num_handler(char *res, int str_len, int n, int is_negative)
{
	if (n == -2147483648)
	{
		is_negative = 1;
		res[str_len] = -(n % 10) + '0';
		n = -(n / 10);
		str_len--;
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n > 0)
	{
		res[str_len] = (n % 10) + '0';
		n = n / 10;
		str_len--;
	}
	if (is_negative == 1)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	int		str_len;
	char	*res;
	int		is_negative;

	is_negative = 0;
	str_len = num_count(n);
	res = (char *)malloc(sizeof(int) * str_len);
	if (res == NULL)
		return (NULL);
	res[str_len] = '\0';
	str_len--;
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	ft_num_handler(res, str_len, n, is_negative);
	return (res);
}
