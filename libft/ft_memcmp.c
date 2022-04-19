/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:42:17 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:30 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		else
			i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char	s[] = {128, 0, 127, 0};
	char	scpy[] = {128, 0 ,127, 0};
	char	s2[] = {0, 0, 127, 0};
	char	s3[] = {0, 0, 42, 0};

	printf("ft_memcmp() (%i) \n", ft_memcmp(s2, s, 4));
}
*/