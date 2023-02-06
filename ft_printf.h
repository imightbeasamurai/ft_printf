/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:43:50 by aerrahim          #+#    #+#             */
/*   Updated: 2023/02/05 16:48:19 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putunsg(unsigned int nbr);
int	ft_putchar(char c);
int	ft_puthexlower(unsigned long nbr);
int	ft_puthexupper(unsigned long nbr);
int	ft_putnbr(int nbr);
int	ft_putadr(unsigned long nbr);
int	ft_putstr(char *str);

#endif
