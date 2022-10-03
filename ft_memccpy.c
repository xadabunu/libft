/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:04:22 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 15:55:21 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s_dest;
	char	*s_src;
	size_t	i;

	i = 0;
	s_dest = (char *)dest;
	s_src = (char *)src;
	while (i < n && s_src[i] != c)
	{
		s_dest[i] = s_src[i];
		++i;
	}
	if (i == n)
		return (NULL);
	s_dest[i] = s_src[i];
	return (dest + i + 1);
}
