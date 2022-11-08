#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_strndup(char const *src, int n)
{
	int	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	unsigned int	i;

	i = 0;
	dest = 0;
	while (s[i])
	{
		if (i == start)
			dest = ft_strndup(s + i, len);
		i++;
	}
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_substr("salut", 3, 2));
	return (0);
}
*/