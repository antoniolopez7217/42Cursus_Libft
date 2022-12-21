/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:50:15 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/10 17:50:17 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	(*node).content = content;
	(*node).next = NULL;
	return (node);
}

// int	main(void)
// {
// 	char	*s = "Hello";
// 	t_list	*node = ft_lstnew(s);

// 	printf("%s\n", (char *)node[0].content);
// 	return (0);
// }
