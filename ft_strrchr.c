/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:17:58 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/01 16:25:38 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while (len > 0)
	{
		if (str[len - 1] == (char)c)
			return ((char *)str + (len - 1));
		len--;
	}
	return (NULL);
}
