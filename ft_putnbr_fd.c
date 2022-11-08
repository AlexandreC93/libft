#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		ft_putchar(nb + '0');
	}
	if (nb > 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
