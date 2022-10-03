/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:59:52 by xadabunu          #+#    #+#             */
/*   Updated: 2022/09/23 11:01:51 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(unsigned char c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(unsigned char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(unsigned char c)
{
	return (ft_isupper(c) || ft_islower(c));
}
