#include "ft_printf.h"

void	type_check(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'i' || s == 'd')
		ft_putnbr(va_arg(*args, int ), len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list 	args;
	int	i;
	int	length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			type_check(str[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)str[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}

int	main()
{
	char a[] = "sumec";
	int	b;
	
	b = 125;
	ft_printf("%s\n", a);
	ft_printf("%i\n", b);
}
