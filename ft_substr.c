/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:45:54 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/20 14:02:34 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	lenstr;
	size_t	sublen;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	if (!lenstr || (start > lenstr) || !len)
		return ((char *)ft_calloc(1, sizeof(char)));
	sublen = lenstr - start;
	if (len < sublen)
		sublen = len;
	sub = ((char *)ft_calloc(sublen + 1, sizeof(char)));
	if (!sub)
		return (NULL);
	ft_strlcat(sub, (s + start), sublen + 1);
	return (sub);
}
