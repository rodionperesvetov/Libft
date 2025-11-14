/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:23:41 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/14 18:32:45 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*data;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		data = *lst;
		while (data->next)
			data = data->next;
		data->next = new;
	}
}
