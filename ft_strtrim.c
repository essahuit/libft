/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:31:24 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/10 11:42:17 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_check_set(s1[i], set) && s1[i])
		i++;
	return (i);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (len > 0 && ft_check_set(s1[len - 1], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (end >= start)
		str = malloc(end - start + 1);
	else
		str = malloc(1);
	if (!str)
		return (NULL);
	while (start + i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
