/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:41:18 by chugot            #+#    #+#             */
/*   Updated: 2023/04/18 14:41:19 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *length)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*length += 11;
		return (*length);
	}
	if (n < 0)
	{
		*length = ft_putchar('-', length);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), length);
		n = n % 10;
	}
	*length = ft_putchar((n + '0'), length);
	return (*length);
}
