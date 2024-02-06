#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0)
		{
			if (is_sep(str[i + 1], charset) == 1)
				words++;
		}
		i++;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * count_words(str, charset));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

#include <stdio.h>
int	main()
{
//	char **result = ft_split("hello, world!", ", ");
//	if (result == NULL)
//	{
//		printf("Mem failure");
//		return 1;
//	}
//	for (int i = 0; result[i] != NULL; i++)
//	{
//		printf("%s\n", result[i]);
//		free(result[i]);
//	}
//	free(result);
	printf("%d", count_words("hello, world!", ", "));
	return (0);
}
