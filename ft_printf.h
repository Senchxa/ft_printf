/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:28:51 by dnoll             #+#    #+#             */
/*   Updated: 2023/05/14 14:38:54 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_putchar_len(char c, int *length);
void	ft_putstr(char *args, int *length);

void	ft_hexadec_num(unsigned int x, int *length, char format);
void	ft_putnbr(int n, int *length);
void	ft_pointer(size_t pointer, int *length);
void	ft_unsigned_int(unsigned int n, int *length);

int		ft_printf(const char *str, ...);

#endif
