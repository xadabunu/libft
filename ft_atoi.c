/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:44 by xadabunu          #+#    #+#             */
/*   Updated: 2022/09/23 10:58:05 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	return (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\r' \
	|| c == '\f');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	if (!nptr)
		return (res);
	i = 0;
	while (ft_isspace(nptr[i]))
		++i;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		++i;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = res * 10 + nptr[i] - '0';
		++i;
	}
	return (sign * res);
}
