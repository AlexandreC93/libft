char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*dest;

	dest = ft_strdup(s);
	if (!dest)
	i = 0;
	while (s[i])
		d = (*f)(i++, s[i]);
	return (d);

}

int	main(int argc, char **argv)
{
	printf("%s", ft_strmapi(argv[1], ft_test(argv[1], argv[2])));
	return (0);
}
