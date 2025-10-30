/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:45:54 by rperesve          #+#    #+#             */
/*   Updated: 2025/10/30 11:46:39 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_local(const char *st)
{
	int	i;

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	const size_t	source_len = ft_strlen_local(s);
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	if (source_len > len)
		return (NULL);
	if (start + len > source_len)
		len = source_len - start;
	str = malloc(len + 1);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
