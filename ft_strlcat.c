/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:43:34 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/14 19:55:14 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (!dst && !len)
		return (ft_strlen(src));
	l = ft_strlen(dst);
	if (len < ft_strlen(dst) + 1)
		return (ft_strlen(src) + len);
	while (src[i] && i < (len - l - 1))
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	return (l + ft_strlen(src));
}
