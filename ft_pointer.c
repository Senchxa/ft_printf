#include "ft_printf.h"

void	ft_pointer(size_t pointer, int *length)
{
	char	str[25];
	int	i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', length);
		return ;
	}
	while (pointer != 0)
	{
		str[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while(i--)
	{
		ft_putchar_len(str[i], length);
	}
}