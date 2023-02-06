/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:22 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/05 16:50:16 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += ft_putadr(nbr / 16);
	i += ft_putchar("0123456789abcdef"[nbr % 16]);
	return (i);
}
