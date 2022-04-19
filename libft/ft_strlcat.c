/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:24:26 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:35:11 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	aux;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	aux = len_dst;
	i = 0;
	if (size > len_dst + 1)
	{
		while (src[i] != '\0' && aux < size - 1)
		{
			dst[aux] = src[i];
			i++;
			aux++;
		}
		dst[aux] = '\0';
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_src + len_dst);
}
