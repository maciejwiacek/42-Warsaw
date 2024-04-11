/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:01:20 by mwiacek           #+#    #+#             */
/*   Updated: 2024/04/08 16:05:08 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "zzzzHellozzzzzEli!zzzz";
	char c = 'z';
	int i = 0;
	char **array = ft_split(s, c);
	while (array[i] != NULL)
	{
		printf("Array item %d: %s\n", i, array[i]);
		i++;
	}
}