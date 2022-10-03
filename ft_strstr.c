/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:04:57 by xadabunu          #+#    #+#             */
/*   Updated: 2022/09/23 12:05:00 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			++j;
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		++i;
	}
	return (0);
}
