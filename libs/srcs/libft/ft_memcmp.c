#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > i)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}

// int main(void)
// {
//   char str1[] = "Hello";
//   char str2[] = "World";
//   int result;

//   result = ft_memcmp(str1, str2, 3);

//   if (result == 0)
//       printf("str1 and str2 are equal.\n");
//   else if (result < 0)
//       printf("str1 is less than str2.\n");
//   else
//       printf("str1 is greater than str2.\n");

//   return 0;
// }