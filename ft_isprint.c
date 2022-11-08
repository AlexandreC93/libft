int ft_isprint(int nbr)
{
    if (nbr >= 32 && nbr <= 126)
        return (1);
    return (0);
}