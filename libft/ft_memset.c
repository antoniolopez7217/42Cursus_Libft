/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:22 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/29 19:47:24 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char a[20] = "Hello World";
// 	char b[20] = "";
// 	char c[20] = "H420.";
// 	char a2[20] = "Hello World";
// 	char b2[20] = "";
// 	char c2[20] = "H420.";
// 	ft_memset(a, '$', 4);
// 	printf("%s\n", a);
// 	ft_memset(b, '$', 1);
// 	printf("%s\n", b);
// 	ft_memset(c, '$', 2);
// 	printf("%s\n\n", c);
// 	memset(a2, '$', 4);
// 	printf("%s\n", a2);
// 	memset(b2, '$', 1);
// 	printf("%s\n", b2);
// 	memset(c2, '$', 2);
// 	printf("%s\n", c2);
// 	return (0);
// }