char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i])
		dest[i] = src[i++];
	
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	
}

int	main(int argc, char **argv)
{
	ft_substr(argv[1], argv[2]);
	return (0);
}
