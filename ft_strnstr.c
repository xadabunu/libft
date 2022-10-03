/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:04:22 by xadabunu          #+#    #+#             */
/*   Updated: 2022/09/23 12:04:24 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int		i;
	int		j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	if (to_find[0] == '\0')
		return (str);
	if (!str)
		return (0);
	while (str[i] && n < len)
	{
		while (str[i + j] == to_find[j])
		{
			++j;
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		++i;
		++n;
	}
	return (0);
}
