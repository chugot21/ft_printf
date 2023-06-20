/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:41:18 by chugot            #+#    #+#             */
/*   Updated: 2023/04/18 14:41:19 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int *length)
{
	if (n == 2147483648)
	{
		write(1, "2147483648", 10);
		*length += 10;
		return (*length);
	}
	if (n > 9)
	{
		ft_putnbr_unsigned((n / 10), length);
		n = n % 10;
	}
	*length = ft_putchar((n + '0'), length);
	return (*length);
}
