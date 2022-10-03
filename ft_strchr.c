/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:12:53 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 16:12:16 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s || !c)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		++i;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}