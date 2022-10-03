/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:08:44 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 16:05:18 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s_dest;
	char	*s_src;
	char	buffer;

	if (!src || !dest)
		return (NULL);
	s_src = (char *)src;
	s_dest = (char *)dest;
	while (n-- > 0)
	{
		buffer = s_src[n];
		s_dest[n] = buffer;
	}
	return (dest);
}
