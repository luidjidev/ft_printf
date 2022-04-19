/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:32:45 by luisfern          #+#    #+#             */
/*   Updated: 2022/04/07 13:00:29 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_printhexalong(unsigned long long n, char *base)
{
	int		i;
	int		temp;
	int		count;
	char	array[1000];

	i = 0;
	temp = 0;
	count = 0;
	if (n == 0)
	{
		ft_printchar('0');
		return (1);
	}
	while (n != 0)
	{
		temp = n % 16;
		array[i++] = base[temp];
		n /= 16;
	}
	while (i > 0)
	{
		count += ft_printchar(array[i - 1]);
		i--;
	}
	return (count);
}

int	ft_printpointer(unsigned long long ptr)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
	{
		count += ft_printhexalong(ptr, "0123456789abcdef");
	}
	return (count);
}
