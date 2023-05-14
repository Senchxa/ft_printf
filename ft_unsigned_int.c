/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:25:20 by dnoll             #+#    #+#             */
/*   Updated: 2023/05/14 13:25:30 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int n, int *length)
{
	if (n >= 10)
	{
		ft_unsigned_int(n / 10, length);
	}
	ft_putchar_len(n % 10 + 48, length);
}
