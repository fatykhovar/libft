/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:40:37 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/05 17:45:46 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	radix_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*res;
	int		n1;

	count = radix_count(n);
	i = count - 1;
	res = malloc(count + 1);
	n1 = n;
	if (res == 0)
		return (0);
	while (i >= 0)
	{
		res[i] = '0' + ft_abs(n % 10);
		n = n / 10;
		i--;
	}
	if (n1 < 0)
		res[0] = '-';
	res[count] = '\0';
	return (res);
}
