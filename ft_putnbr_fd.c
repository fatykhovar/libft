/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:16:37 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/05 17:46:12 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(int nb, int fd)
{
	char	c;

	c = nb % 10 + '0';
	if (nb <= 0)
	{
		return ;
	}
	print(nb / 10, fd);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n == 0)
		{
			write(fd, "0", 1);
		}
		else
		{
			if (n > 0)
			{
				print(n, fd);
			}
			else
			{
				write(fd, "-", 1);
				print(-1 * n, fd);
			}
		}
	}
}
