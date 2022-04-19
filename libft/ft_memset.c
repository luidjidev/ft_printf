/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:16:39 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:38 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";
	char	strr[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	memset(str + 15, '.', 8 * sizeof(char));
	printf("After memset():  %s", str);
	printf("\nBefore ft_memset(): %s\n", strr);
	ft_memset(strr + 15, '.', 8);
	printf("After ft_memset():  %s", strr);
	return (0);
}*/
