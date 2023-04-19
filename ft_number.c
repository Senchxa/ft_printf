#include "ft_printf.h"

void	ft_putnbr(int n, int *length)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
	}
	if (n < 0)
	{
		ft_putchar_len('-', length);
		ft_putnbr(n * -1, length);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10, length);
			ft_putchar_len(n % 10 + 48, length);
		}
	}
}
