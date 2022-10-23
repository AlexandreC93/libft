#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb);
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	return (0);
}
*/
