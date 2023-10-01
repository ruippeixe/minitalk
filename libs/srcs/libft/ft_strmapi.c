#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char add_one(unsigned int index, char c)
// {
//   return c + 1;
// }

// int main(void)
// {
//   char *input = "31";
//   printf("%s\n", ft_strmapi(input, add_one)); // 42
//   return 0;
// }