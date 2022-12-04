/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:07:30 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 19:07:32 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char a[] = "Hello World";
// 	char b[] = "O ";
// 	char c[] = "H420.";
// 	char a2[] = "Hello World";
// 	char b2[] = "O ";
// 	char c2[] = "H420.";
// 	ft_memcpy(b, a, 4);
// 	printf("%s\n", b);
// 	ft_memcpy(a, c, 5);
// 	printf("%s\n\n", a);
// 	memcpy(b2, a2, 4);
// 	printf("%s\n", b2);
// 	memcpy(a2, c2, 5);
// 	printf("%s\n", a2);
// 	return (0);
// }