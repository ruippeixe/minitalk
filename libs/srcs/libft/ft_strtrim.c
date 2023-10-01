#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		if (i > j)
			return (ft_strdup(""));
		i++;
	}
	while (ft_strchr(set, s1[j]) != NULL)
	{
		if (j < i)
			return (ft_strdup(""));
		j--;
	}
	return (ft_substr(s1, i, j + 1 - i));
}

// int main(void)
// {
// 	char *str = "ft42Hello World4ftf2t";
// 	char *set = "42ft";
// 	printf("%s\n", ft_strtrim(str, set)); // Hello World
// 	return (0);
// }