/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:31:33 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/19 14:05:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_getlen(unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (n != n % 10)
	{
		++len;
		n = n / 10;
	}
	++len;
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	uns_n;
	unsigned int	len;
	char			*str;

	len = 0;
	if (n < 0)
	{
		uns_n = -n;
		len++;
	}
	else
		uns_n = n;
	len += ft_getlen(uns_n);
	str = (char *) ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (str[len - 1] != '-' && len > 0)
	{
		str[len - 1] = uns_n % 10 + '0';
		uns_n /= 10;
		--len;
	}
	return (str);
}
