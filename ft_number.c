/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:17:21 by dnoll             #+#    #+#             */
/*   Updated: 2023/05/14 15:35:31 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *length)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
	}
	else if (n < 0)
	{
		ft_putchar_len('-', length);
		n = -n;
		ft_putnbr(n, length);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, length);
		ft_putnbr(n % 10, length);
	}
	else
	{
		ft_putchar_len(n + 48, length);
	}
}
