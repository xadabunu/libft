/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:05:20 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 16:15:27 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	nb;

	if (!s || start >= ft_strlen(s))
		return (NULL);
	nb = ft_strlen(s) - start;
	if (nb < len)
		len = nb;
	str = (char *)malloc((len + 1) * sizeof(*str));
	ft_strlcpy(str, s + start, len);
	return (str);
}
