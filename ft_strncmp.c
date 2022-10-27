int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] & i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}

