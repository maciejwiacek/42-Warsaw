/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:41:15 by mwiacek           #+#    #+#             */
/*   Updated: 2024/03/04 17:16:52 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

	int		main(int argc, const char *argv[])
	{
		char	src[] = "lorem ipsum dolor sit amet";
		char	*dest;
		int		arg;

		dest = src + 1;
		alarm(5);
		if (argc == 1)
			return (0);
		else if ((arg = atoi(argv[1])) == 1)
		{
			if (dest != ft_memmove(dest, "consectetur", 5))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 2)
		{
			if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 3)
		{
			if (dest != ft_memmove(dest, src, 8))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 4)
		{
			if (src != memmove(src, dest, 8))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		else if (arg == 5)
		{
			if (src != ft_memmove(src, dest, 0))
				write(1, "dest's adress was not returned\n", 31);
			write(1, dest, 22);
		}
		return (0);
	}
