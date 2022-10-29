
int ft_isalnum(int nbr)
{
    if ((nbr >= 48 && nbr <= 57) || (nbr >= 97 && nbr <= 122) || (nbr >= 65 && nbr <= 90))
        return (1);
    return (0);
}