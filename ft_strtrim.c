/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:17:35 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/28 14:39:25 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		++i;
	}
	return (0);
}

/*static int	ft_trimlen(char const *str, char const *set)
{
	int	i;
	int	ctr;

	i = 0;
	ctr = 0;
	while (str[i] && ft_isinset(str[i], set))
		++i;
	while (str[i])
	{
		ctr++;
		i++;
	}
	while (ctr > 0 && ft_isinset(str[--i], set))
		--ctr;
	return (ctr);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	unsigned int	pos;

	pos = 0;
	while (ft_isinset(s1[pos], set))
		++pos;
	len = ft_strlen(s1 + pos);
	while (ft_isinset(s1[pos + len - 1], set))
		--len;
	return (ft_substr(s1, pos, len));
}
