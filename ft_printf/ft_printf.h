/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:34:49 by fpektas           #+#    #+#             */
/*   Updated: 2022/05/20 13:02:26 by fpektas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printchar(char c);
int	format(char c, va_list arg);
int	ft_printf(const char *str, ...);
int	ft_printstr(const char *str);
int	ft_printpointer(unsigned long int n);
int	ft_printnbr(int nb);
int	ft_printunbr(unsigned int nb);
int	ft_printhex(char c, unsigned int sayi);

#endif
