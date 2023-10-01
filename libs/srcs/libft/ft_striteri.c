#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
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