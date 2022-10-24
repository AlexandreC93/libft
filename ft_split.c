int	ft_is_space(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int	ft_wordcount(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_space(str[i], charset))
		{
			count++;
			while (ft_is_space(str[i], charset))
				i++;
		}
	}
	return (count);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (str[i])
	{
		if (ft_is_space())
	}
}

char	**ft_split(char *str, char *charset)
{
}

int	main(int argc, char **argv)
{
	ft_split(argv[1], argv[2]);
	return (0);
}
