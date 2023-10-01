#include "libft.h"

static int	count_delimiter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

static int	substring_length(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (s1[i] != c && s1[i] != '\0')
		i++;
	return (i);
}

static char	*create_substring(char const *s, int *i, char c)
{
	int		j;
	char	*str;

	j = 0;
	str = (char *)malloc(sizeof(char) * (substring_length(s + *i, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[*i] != c && s[*i] != '\0')
	{
		str[j] = s[*i];
		j++;
		(*i)++;
	}
	str[j] = '\0';
	return (str);
}

static void	*cleanup_split(char **arr)
{
	size_t	idx;

	idx = 0;
	while (arr[idx] != NULL)
		free(arr[idx++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (count_delimiter(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			arr[j] = create_substring(s, &i, c);
			if (arr[j] == NULL)
				return (cleanup_split(arr));
			j++;
		}
	}
	arr[j] = 0;
	return (arr);
}

// int main(void)
// {
// 	char *str = "-Hello-World";
// 	char **split;
// 	int	i;
// 	i = 0;
// 	split = ft_split(str, '-');
// 	while (split[i])
// 	{
// 		printf("%s, ", split[i]); // Hello, World,
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }