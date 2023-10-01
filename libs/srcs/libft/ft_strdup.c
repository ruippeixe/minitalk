#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main(void)
// {
// 	char *str = "Hello World";
// 	printf("Before: %s\n", str); // Hello World
// 	printf("After: %s\n", ft_strdup(str)); // Hello World
// 	return (0);
// }