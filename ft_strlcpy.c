/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 00:23:48 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/04 15:33:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (i < destsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i == destsize)
		return (i);
	dest[i] = 0;
	return (destsize);
}