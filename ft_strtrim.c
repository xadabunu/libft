/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:17:35 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 16:15:05 by xadabunu         ###   ########.fr       */
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

static int	ft_trimlen(char const *str, char const *set)
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
	while (ft_isinset(str[--i], set))
		--ctr;
	return (ctr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	len = ft_trimlen(s1, set);
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isinset(s1[j], set))
		++j;
	while (i < len)
		res[i++] = s1[j++];
	res[i] = 0;
	return (res);
}
