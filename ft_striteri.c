void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
        int     j;
	char	*dest;

	i = 0;
        j = ft_strlen(s);
	while (i < j)
		(*f)(i++, s++);
}

int	main(int argc, char **argv)
{
	return (0);
}
