#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
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

int	ft_count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_sep(str[i + 1], charset) == 1
			&& ft_is_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_copy_word(char *str, char *charset)
{
	char	*word;
	char	*start_word;

	word = (char *)malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
	start_word = word;
	if (word == NULL)
		return (NULL);
	while (*str != '\0' && !ft_is_sep(*str, charset))
	{
		*word = *str;
		word++;
		str++;
	}
	*word = '\0';
	return (start_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * ft_count_words(str, charset) + 1);
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
		{
			arr[j] = ft_copy_word(str + i, charset);
			j++;
		}
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
			i++;
	}
	arr[j] = 0;
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	int		i;
	char	**result;

	i = 0;
	result = ft_split("Does, it, work, ?", ", ");
	if (result == NULL)
	{
		printf("Mem failure");
		return (1);
	}
	while (result[i] != NULL)
	{
		printf("Arr %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
