/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:53:19 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/11 11:53:21 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;

	newlst = 0;
	while (lst)
	{
		aux = ft_lstnew(f((*lst).content));
		if (!aux)
		{	
			del(aux);
			return (0);
		}
		ft_lstadd_back(&newlst, aux);
		lst = (*lst).next;
	}
	return (newlst);
}
