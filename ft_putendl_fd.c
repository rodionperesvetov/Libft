/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:53:51 by rperesve          #+#    #+#             */
/*   Updated: 2025/11/13 17:54:48 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *const s, int fd)
{
	if (fd > SHRT_MAX || fd < 0 || !s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
