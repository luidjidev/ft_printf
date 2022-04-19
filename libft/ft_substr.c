/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:20:20 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:35:39 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	aux;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = start;
	aux = 0;
	while (i < ft_strlen(s) && aux < len)
	{
		substr[aux] = s[i];
		aux++;
		i++;
	}
	substr[aux] = '\0';
	return (substr);
}
