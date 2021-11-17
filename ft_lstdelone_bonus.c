/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:02:35 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:04 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*el;

	if (!lst)
		return ;
	el = lst;
	del(el->content);
	free(el);
}
