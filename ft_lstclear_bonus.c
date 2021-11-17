/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:00:16 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/12 12:40:07 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*el;

	if (!*lst || !del)
		return ;
	el = *lst;
	while (el)
	{
		temp = el->next;
		del(el->content);
		free(el);
		el = temp;
	}
	*lst = NULL;
}
