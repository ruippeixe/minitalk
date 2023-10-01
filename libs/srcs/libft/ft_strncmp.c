#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

// int main(void)
// {
//     char str1[10] = "Hello";
//     char str2[10] = "Heklo";
//     printf("%d\n", ft_strncmp(str1, str2, 5)); // 1
//     return 0;
// }