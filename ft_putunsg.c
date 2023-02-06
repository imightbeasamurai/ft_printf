/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:45:16 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/05 16:52:46 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsg(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr >= 10)
	{
		i += ft_putunsg(nbr / 10);
		i += ft_putchar(nbr % 10 + 48);
	}
	else
		i += ft_putchar(nbr + 48);
	return (i);
}
