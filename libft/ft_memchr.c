/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:19:54 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:25 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char )c)
		{
			return (&*(char *)(s + i));
			break ;
		}
		i++;
		if ((int)i == -1)
			return (0);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[50] = {0, 1, 2, 3, 4, 5};

	printf("ft_memchr():  %s\n", ft_memchr(str, 2 + 256, 2));
	return (0);
}
*/