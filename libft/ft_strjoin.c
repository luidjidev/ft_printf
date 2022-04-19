/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:55:34 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:35:08 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		s3[i] = *s2;
		i++;
		s2++;
	}
	s3[i] = 0;
	return (s3);
}
