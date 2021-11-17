/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:59:29 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:34 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*ele;
	t_list	*temp;
	void	*data;

	if (!lst)
		return (NULL);
	ele = NULL;
	while (lst)
	{
		temp = lst;
		data = f(temp->content);
		n = ft_lstnew(data);
		if (!n)
		{
			ft_lstclear(&ele, del);
			return (NULL);
		}
		ft_lstadd_back(&ele, n);
		lst = lst->next;
	}
	return (ele);
}
