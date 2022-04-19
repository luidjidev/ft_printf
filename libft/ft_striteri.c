/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:11:34 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:35:05 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (index < i)
		{
			(*f)(index, s);
			s++;
			index++;
		}
	}
}
