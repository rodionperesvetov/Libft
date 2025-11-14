/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:48:32 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/13 14:51:08 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_decimal(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*fill_str(char *str, long l, int i)
{
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	l;
	int		i;

	l = n;
	i = ft_decimal(l);
	str = (char *) malloc((i + 1) * sizeof(char));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (fill_str(str, l, i));
}
