/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:50:41 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/05 16:51:40 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		i = 11;
	}
	else if (nbr < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(-nbr);
	}
	else if (nbr >= 10)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putchar(nbr % 10 + '0');
	}
	else
		i += ft_putchar(nbr + '0');
	return (i);
}
