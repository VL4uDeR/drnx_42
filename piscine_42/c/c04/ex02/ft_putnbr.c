#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char n;

	n = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 9)
		ft_putnbr(nb / 10);
	n = nb % 10 + '0';
	write(1, &n, 1);
}

int	main(void)
{
	ft_putnbr(-12345);
	write(1, "\n", 1);
	return (0);
}
