/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:13 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:33:38 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	signal;

	i = 0;
	n = 0;
	signal = 1;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) \
			&& (str[i] != '\0'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * signal);
}
