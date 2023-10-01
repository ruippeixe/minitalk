#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// int main(void)
// {
//     char str[12] = "Hello World";
//     char c = 'W';
//     printf("%s\n", ft_strchr(str, c)); // World
//     return 0;
// }