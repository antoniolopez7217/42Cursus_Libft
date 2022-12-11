/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:00:57 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/11 11:00:59 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if(*lst)
	{
		while (*lst)
		{
			aux = (**lst).next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
	*lst = NULL;
}
