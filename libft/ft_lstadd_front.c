/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:32:20 by luisfern          #+#    #+#             */
/*   Updated: 2022/03/17 13:34:03 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;
	t_list	*temp;

	head = *lst;
	temp = (t_list *)malloc(sizeof(*temp));
	temp->content = new;
	temp->next = head;
	head = temp;
}*/