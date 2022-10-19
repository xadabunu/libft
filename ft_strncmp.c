/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:03:54 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/19 15:03:03 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			++i;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*s1 || *s2) n > 0)
	{
		if (*s1 == *s2)
		{
			++s1;
			++s2;
		}
		else
			return (*(unsigned char)s1 - *(unsigned char)s2);
		--n;
	}
	return (0);
}
