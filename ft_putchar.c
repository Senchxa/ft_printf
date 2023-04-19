#include "ft_printf.h"

void	ft_putchar_len(char c, int *length)
{
	write (1, &c, 1);
	(*length)++;
}
