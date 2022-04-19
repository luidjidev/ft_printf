/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:37:00 by luisfern          #+#    #+#             */
/*   Updated: 2022/04/19 10:56:39 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_utoa(unsigned int n)
{
	int		i;
	int		count;
	char	*string;

	i = count_unsigned(n);
	count = 1;
	string = malloc((i + 1) * sizeof(char));
	string[i] = '\0';
	i--;
	while (n != 0)
	{
		string[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (string);
}
