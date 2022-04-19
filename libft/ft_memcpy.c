/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:21:19 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:33 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

/*#include <string.h>

int	main(void)
{
	char	str[7] = "aabbcc";
	char	strr[7] = "aabbcc";

	printf("before memcpy() %s \n", str);
	memcpy(str + 2, str, 4);
	printf("after memcpy() %s \n", str);
	printf("before ft_memcpy() %s \n", strr);
	memmove(strr + 2, strr, 4);
	printf("after ft_memcpy() %s \n", strr);
}*/
