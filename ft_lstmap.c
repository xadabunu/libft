/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:58:49 by xadabunu          #+#    #+#             */
/*   Updated: 2022/10/03 15:54:43 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*next;

	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	next = lst->next;
	while (lst->next)
	{
		current = ft_lstnew((*f)(next->content));
		if (!current)
		{
			ft_lstclear(&new_lst, del);
			free(new_lst);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, current);
		next = next->next;
	}
	return (new_lst);
}
