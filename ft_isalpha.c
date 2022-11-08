int ft_isalpha(int nbr)
{
    if ((nbr >= 65 && nbr <= 90) || (nbr >= 97 && nbr <= 122))
        return (1);
    return (0);
}