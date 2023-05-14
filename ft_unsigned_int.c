#include "ft_printf.h"

void	ft_unsigned_int(unsigned int n, int *length)
{
	if (n >= 10)
	{
		ft_unsigned_int(n / 10, length);
	}
	ft_putchar_len(n % 10 + 48, length);
}
