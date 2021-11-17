/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:35:59 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 12:50:48 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(small))
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (big[i + j] == small[j] && (j + i) < len && small[j])
				j++;
			if (j == ft_strlen(small))
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
