/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:39:30 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:57 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	trigger;

	if (!s)
		return (0);
	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

static char	*store_word(const char *s, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

int	function(const char *s, char **super, char c)
{
	if (!s)
		return (0);
	super = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!super)
		return (0);
	else
		return (1);
}

char	**ft_split(char const *s, char c)
{
	int		trigger_index;
	char	**super;
	size_t	i;
	size_t	j;

	super = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!super || !s)
		return (0);
	i = 0;
	j = 0;
	trigger_index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && trigger_index < 0)
			trigger_index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && trigger_index >= 0)
		{
			super[j++] = store_word(s, trigger_index, i);
			trigger_index = -1;
		}
		i++;
	}
	super[j] = 0;
	return (super);
}
