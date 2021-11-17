/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:22:29 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/11 18:22:10 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_long(size_t	sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	size_t				k;
	int					sign;
	unsigned long long	n;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	k = i;
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	k = i - k;
	if (k > 19 || n > 9223372036854775807)
		return (ft_long(sign));
	n = n * sign;
	return ((int)n);
}
