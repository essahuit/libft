/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:01:45 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/01 21:07:06 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s;

	i = 0;
	s = malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
