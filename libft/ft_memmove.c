/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:39:11 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:35 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	str[7] = "aabbcc";
	char	strr[7] = "aabbcc";

	printf("before memmove() %s \n", str);
	memmove(str + 2, str, 4);
	printf("after memmove() %s \n", str);
	printf("before ft_memmove() %s \n", strr);
	ft_memmove(strr + 2, strr, 4);
	printf("after ft_memmove() %s \n", strr);
}
*/