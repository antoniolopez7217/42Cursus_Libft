/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:15:22 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/10 18:15:23 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_lstadd_front(t_list **lst, t_list *new)
{
	lst[0]->content = new->content;
	lst[0]->next = new->next;
}
