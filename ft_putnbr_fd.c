/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:36:04 by kessalih          #+#    #+#             */
/*   Updated: 2021/11/12 09:27:22 by kessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_print(unsigned long n, int fd)
{
	if (n > 9)
	{
		ft_print(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long	nb;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	nb = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		nb = n * (-1);
		write(fd, "-", 1);
	}
	ft_print(nb, fd);
}
