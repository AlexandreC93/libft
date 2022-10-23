#include <stdio.h>

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strchr(argv[1], 'l'));
	return (0);
}
*/
