/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:22:01 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 22:22:03 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char a[20] = "Hello World";
// 	char a2[20] = "Hello World";
// 	printf("%s\n", a);
// 	ft_bzero(a, 20);
// 	printf("%s\n", a);
// 	printf("%s\n", a2);
// 	bzero(a2, 20);
// 	printf("%s\n", a2);
// 	return (0);
// }