/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:06:56 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:33:45 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}

/*
#include <string.h>
int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";
	char	strr[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore bzero(): %s\n", str);
	bzero(str, 5);
	printf("After bzero():  %s", str);
	printf("\nBefore ft_bzero(): %s\n", strr);
	ft_bzero(strr, 5);
	printf("After ft_bzero():  %s\n", strr);
	return (0);
}
*/