/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:43:26 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/07 02:16:12 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(va_list args, char flag)
{
	int	c;

	c = 0;
	if (flag == 'c')
		c += ft_putchar(va_arg(args, int));
	else if (flag == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (flag == 'd' || flag == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (flag == 'u')
		c += ft_putunsg(va_arg(args, unsigned int));
	else if (flag == 'x')
		c += ft_puthexlower(va_arg(args, unsigned int));
	else if (flag == 'X')
		c += ft_puthexupper(va_arg(args, unsigned int));
	else if (flag == 'p')
	{
		c += ft_putstr("0x");
		c += ft_putadr(va_arg(args, unsigned long));
	}
	return (c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		x;

	x = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[++i] != '%')
				x += ft_flag(args, str[i]);
			else
				x += ft_putchar(str[i]);
		}
		else
			x += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (x);
}
