/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:40:38 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/20 10:35:35 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char c, const char *set)
{
	int	i;

	i = 0;
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
	char	*s2;
	size_t	trimlen;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && set_check(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && set_check(s1[j], set))
		j--;
	trimlen = j - i;
	s2 = (char *) malloc(sizeof(char) * (trimlen + 2));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + i, trimlen + 1);
	s2[trimlen + 1] = '\0';
	return (s2);
}
