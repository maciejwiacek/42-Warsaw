/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:30:53 by mwiacek           #+#    #+#             */
/*   Updated: 2024/02/29 19:25:40 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "abc,def,ghi,jkl,mno,";
    char sep = ',';
    char **arr = ft_split(str, sep);
    int i = 0;
    while (arr[i] != 0)
    {
        printf("Array item %d: %s\n", i, arr[i]);
        i++;
    }
    return 0;
}
