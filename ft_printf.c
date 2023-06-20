/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:20:51 by chugot            #+#    #+#             */
/*   Updated: 2023/04/27 14:20:52 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_ptr(unsigned long int ptr, int *length)
{
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		*length += 5;
		return (*length);
	}
	write(1, "0x", 2);
	*length += 2;
	*length = ft_putnbr_ptr(ptr, length);
	return (*length);
}

int	ft_format(const char type_format, va_list list, int *length)
{
	if (type_format == 'c')
		*length = ft_putchar(va_arg(list, int), length);
	else if (type_format == 's')
		*length = ft_putstr(va_arg(list, char *), length);
	else if (type_format == 'p')
		*length = ft_format_ptr(va_arg(list, unsigned long int), length);
	else if (type_format == 'd' || type_format == 'i')
		*length = ft_putnbr(va_arg(list, int), length);
	else if (type_format == 'u')
		*length = ft_putnbr_unsigned(va_arg(list, unsigned int), length);
	else if (type_format == 'x')
		*length = ft_putnbr_basex(va_arg(list, unsigned int), length);
	else if (type_format == 'X')
		*length = ft_putnbr_basexmaj(va_arg(list, unsigned int), length);
	else if (type_format == '%')
		*length = ft_putchar('%', length);
	return (*length);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		end;
	int		length;
	va_list	list;

	va_start(list, format);
	end = ft_strlen(format);
	length = 0;
	i = 0;
	while (i < end)
	{
		if (format[i] == '%')
		{
			length = ft_format(format[i + 1], list, &length);
			i++;
		}
		else
			length = ft_putchar(format[i], &length);
		i++;
	}
	va_end(list);
	return (length);
}
