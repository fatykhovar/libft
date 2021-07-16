/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbathe <bbathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:27:49 by bbathe            #+#    #+#             */
/*   Updated: 2021/05/10 14:40:03 by bbathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	help_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0' && s1[i] != '\0')
	{
		if (set[j + 1] == '\0' && set[j] != s1[i])
			return (i);
		if (s1[i] == set[j])
		{
			j = -1;
			i++;
		}
		j++;
	}
	return (i);
}

static int	help_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen((char *)s1) - 1;
	j = 0;
	while (set[j] != '\0' && i >= 0)
	{
		if (set[j + 1] == '\0' && set[j] != s1[i])
			return (i);
		if (s1[i] == set[j])
		{
			j = -1;
			i--;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		j;
	int		end;
	char	*res;

	j = 0;
	if (s1 == 0 || set == 0)
		return (0);
	start = help_start(s1, set);
	end = help_end(s1, set);
	if (start <= end)
		res = malloc(end - start + 2);
	else
		res = malloc(1);
	if (res == 0)
		return (0);
	while (start < end + 1)
	{
		res[j] = s1[start];
		start++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
