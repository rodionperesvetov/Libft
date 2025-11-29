/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:05:04 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/20 16:35:57 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		n;
	int		i;

	n = ft_strlen((char *)s);
	i = 0;
	d = (char *)malloc(sizeof(char) * (n + 1));
	if (!d)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strndup(const char *s, unsigned int n)
{
	char	*d;

	d = (char *)malloc(sizeof(char) * (n + 1));
	if (!d)
		return (NULL);
	d[n] = '\0';
	ft_strncpy(d, s, n);
	return (d);
}
