#include <stdio.h>

char	*ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int 	i;

	i = 0;
	while (src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strlcpy());
	return (0);
}
