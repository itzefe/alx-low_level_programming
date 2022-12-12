#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
void ft_print_comb2(void)
{
	int i;

	int j;

	i = 0
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
int main(void)
{
	ft_print_comb2();
	return (0);
}
