/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:44:09 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/20 16:55:06 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strncpy(char *dst, const char *src, unsigned int n)
{
	char *const	dest = dst;
	const char	*s = src;

	while (n-- != 0)
	{
		*dst++ = *s;
		if (*s++ == 0)
		{
			while (n-- != 0)
				*dst++ = '\0';
			break ;
		}
	}
	return (dest);
}
