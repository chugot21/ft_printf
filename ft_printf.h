/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:25:55 by chugot            #+#    #+#             */
/*   Updated: 2023/04/14 19:02:39 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n, int *length);
int	ft_putnbr_basex(unsigned int n, int *length);
int	ft_putnbr_basexmaj(unsigned int n, int *length);
int	ft_strlen(const char *str);
int	ft_putstr(char *s, int *length);
int	ft_putnbr_ptr(unsigned long int n, int *length);
int	ft_putnbr_unsigned(unsigned int n, int *length);
int	ft_putchar(char c, int *length);
int	ft_format_ptr(unsigned long int ptr, int *length);

#endif
