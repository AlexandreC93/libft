void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	char	*dest;

	i = 0;
	while (s[i])
		(*f)(i++, s);
}

int	main(int argc, char **argv)
{
	return (0);
}
