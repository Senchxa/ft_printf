/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:25:50 by dnoll             #+#    #+#             */
/*   Updated: 2023/05/14 16:47:49 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(size_t pointer, int *length)
{
	char	str[25];
	char	*base_character;
	int		i;

	base_character = "0123456789abcdef";
	if (pointer == 0)
	{
		write(1, "(nil)", 5);
		(*length += 5);
		return ;
	}
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	while (pointer != 0)
	{
		str[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(str[i], length);
	}
}
