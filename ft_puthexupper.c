/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:36 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/05 16:51:14 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += ft_puthexupper(nbr / 16);
	i += ft_putchar("0123456789ABCDEF"[nbr % 16]);
	return (i);
}
