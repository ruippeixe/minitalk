#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (len > i && s[start] != '\0')
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main(void)
// {
// 	char *str1 = "Hello 42 World";
// 	int start = 6;
// 	int len = 2;
// 	printf("%s\n", ft_substr(str1, start, len)); // 42
// 	return (0);
// }