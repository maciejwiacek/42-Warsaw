#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (new_str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	i = 0;
	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strcpy(av[i]);
		i++;
	}
	array[i].str = NULL;
	array[i].size = 0;
	array[i].copy = NULL;
	return (array);
}

int	main(void)
{
	char		*av[3];
	int			ac;
	t_stock_str	*result;

	av[0] = "Abc";
	av[1] = "";
	av[2] = "ghi";
	ac = 3;
	result = ft_strs_to_tab(ac, av);
	if (result != NULL)
	{
		printf("%s\n", result[1].copy);
		for (int i = 0; result[i].str != NULL; i++)
		{
			free(result[i].copy);
		}
		free(result);
	}
	return (0);
}
