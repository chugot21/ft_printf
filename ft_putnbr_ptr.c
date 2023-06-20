/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:41:18 by chugot            #+#    #+#             */
/*   Updated: 2023/04/18 14:41:19 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ptr(unsigned long int n, int *length)
{
	if (n >= 16)
	{
		ft_putnbr_ptr((n / 16), length);
		n = n % 16;
	}
	if (n <= 9)
		*length = ft_putchar((n + '0'), length);
	else
		*length = ft_putchar((n - 10 + 'a'), length);
	return (*length);
}
