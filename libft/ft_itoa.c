/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:13:52 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:33:58 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_neutral(void)
{
	char	*ptr;

	ptr = malloc(2 * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*itoa_positive(int n)
{
	int		aux;
	int		count;
	char	*ptr;

	aux = n;
	count = 1;
	while (aux != 0)
	{
		aux /= 10;
		count++;
	}
	ptr = (char *) malloc(count * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[count - 1] = '\0';
	while (count > 1)
	{
		aux = n % 10;
		ptr[count - 2] = aux + '0';
		n /= 10;
		count--;
	}
	return (ptr);
}

static char	*itoa_negative(int n)
{
	int		aux;
	int		count;
	char	*ptr;

	count = 0;
	n *= -1;
	aux = n;
	while (aux != 0)
	{
		aux /= 10;
		count++;
	}
	count += 2;
	ptr = (char *) malloc(count * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[count - 1] = '\0';
	while (count > 1)
	{
		ptr[count - 2] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	ptr[0] = '-';
	return (ptr);
}

static char	*itoa_int_min(void)
{
	char	*ptr;

	ptr = malloc(12 * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	if (n == 0)
	{
		return (itoa_neutral());
	}
	else if (n > 0)
	{
		return (itoa_positive(n));
	}
	else if (n == -2147483648)
	{
		return (itoa_int_min());
	}
	else if (n < 0)
	{
		return (itoa_negative(n));
	}
	return (0);
}
