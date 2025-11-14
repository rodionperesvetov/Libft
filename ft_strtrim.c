/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:40:38 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/11 16:11:44 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char c, const char *set)
{
	int	i;

	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	trimlen;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	while (s1[i] != '\0' && set_check(s1[i], set))
		i++;
	j = len - 1;
	while (j > i && set_check(s1[j], set))
		j--;
	trimlen = j - i;
	if (!trimlen)
		return (NULL);
	str = (char *) malloc(sizeof(char) * (trimlen + 2));
	ft_memcpy(str, s1 + i, trimlen + 1);
	str[trimlen + 1] = '\0';
	return (str);
}
