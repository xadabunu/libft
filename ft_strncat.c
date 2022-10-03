/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:03:37 by xadabunu          #+#    #+#             */
/*   Updated: 2022/09/23 12:03:40 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (!dest || !src)
		return (0);
	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	return (dest);
}
