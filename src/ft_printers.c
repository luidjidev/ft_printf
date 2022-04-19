/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:45:19 by luisfern          #+#    #+#             */
/*   Updated: 2022/04/19 11:00:19 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		ft_printchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_printuns(unsigned int n)
{
	int		count;
	char	*num;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		count = ft_printstr(num);
		free(num);
	}
	return (count);
}

int	ft_printhexa(unsigned int n, char *base)
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
