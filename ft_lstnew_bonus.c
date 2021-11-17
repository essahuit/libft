/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:54:05 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 17:32:10 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = (t_list *)malloc(sizeof(t_list));
	if (!ele)
		return (NULL);
	ele->content = content;
	ele->next = NULL;
	return (ele);
}
