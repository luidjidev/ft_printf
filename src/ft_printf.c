/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:07:28 by luisfern          #+#    #+#             */
/*   Updated: 2022/04/07 11:36:28 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_format(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(arg, int));
	else if (c == 'd' || c == 'i')
		count += ft_printnbr(va_arg(arg, int));
	else if (c == 's')
		count += ft_printstr(va_arg(arg, char *));
	else if (c == 'u')
		count += ft_printuns(va_arg(arg, unsigned int));
	else if (c == 'x')
		count += ft_printhexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_printhexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
		count += ft_printpointer(va_arg(arg, unsigned long long));
	else if (c == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_format(str[i + 1], arg);
			i++;
		}
		else
			count += write (1, &str[i], 1);
		i++;
	}
	return (count);
}
