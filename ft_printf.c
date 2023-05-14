/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:20:59 by dnoll             #+#    #+#             */
/*   Updated: 2023/05/14 15:46:05 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*#include <stdio.h>*/

void	type_check(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (s == 'i' || s == 'd')
		ft_putnbr(va_arg(*args, int ), len);
	else if (s == 'x')
		ft_hexadec_num(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadec_num(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;
	int			length;

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

/*int	main()
{
	char c = 'A';
	int i = -4200;
	double d = 3.14159;
	unsigned int u = 123456;
	char *s = "Hello, world!";
	void *p = &i;
	
	ft_printf("%%s: %s\n", s);
	ft_printf("%%i: %i\n", i);
	ft_printf("%%d: %d\n", (int)d);
	ft_printf("%%x: %x\n", u);
	ft_printf("%%X: %X\n", u);
	ft_printf("%%u: %u\n", u);
	ft_printf("%%p: %p\n", p);
	ft_printf("%%c: %c\n\n\n", c);

	printf("%%s: %s\n", s);
    printf("%%i: %i\n", i);
    printf("%%d: %d\n", (int)d);
    printf("%%x: %x\n", u);
    printf("%%X: %X\n", u);
    printf("%%u: %u\n", u);
    printf("%%p: %p\n", p);
    printf("%%c: %c\n", c);
}*/
