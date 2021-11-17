/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:56:04 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 16:11:08 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*el;

	if (!new)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	el = ft_lstlast(*lst);
	el->next = new;
}
