#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_hex(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		ft_putchar(c);
		c++;
	}
}
int main(void)
{
	ft_print_hex();
	ft_putchar('\n');
	return (0);
}
