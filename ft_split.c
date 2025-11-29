/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:55:22 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/20 16:23:03 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_allocate(const char *(*stack)[2], int stack_pointer)
{
	int		i;
	char	**result;

	result = (char **)malloc((stack_pointer + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < stack_pointer)
	{
		result[i] = ft_strndup(stack[i][0], (stack[i][1] - stack[i][0]));
		if (result[i] == NULL)
		{
			while (i > 0)
			{
				free(result[i]);
				i--;
			}
			return (free(result[i]), NULL);
		}
		i++;
	}
	result[stack_pointer] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			stack_pointer;
	const char	*stack[MAX_STACK_SIZE][2];

	i = 0;
	if (!s)
		return ((char **)ft_calloc(1, sizeof(char *)));
	stack_pointer = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			stack[stack_pointer][0] = &s[i];
			stack[stack_pointer][1] = ft_strchrnul(&s[i], c);
			i += (int)(stack[stack_pointer][1] - stack[stack_pointer][0]);
			stack_pointer++;
		}
	}
	return (ft_allocate(stack, stack_pointer));
}
