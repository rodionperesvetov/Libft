/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:38:28 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/14 13:29:35 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd > SHRT_MAX || fd < 0 || !s)
		return ;
	write(fd, s, ft_strlen(s));
}
