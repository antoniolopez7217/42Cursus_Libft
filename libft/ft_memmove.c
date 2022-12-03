/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:27:47 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 19:27:48 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (dest > src)
	{
		i = n - 1;
		while (i > 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char a[20] = "Hello World";
// 	char b[20] = "";
// 	char c[20] = "H420.";
// 	char a2[20] = "Hello World";
// 	char b2[20] = "";
// 	char c2[20] = "H420.";
// 	ft_memmove(b, c, 5);
// 	printf("%s\n", b);
// 	ft_memmove(a, c, 5);
// 	printf("%s\n\n", a);
// 	memmove(b2, c2, 5);
// 	printf("%s\n", b2);
// 	memmove(a2, c2, 5);
// 	printf("%s\n", a2);
// 	return (0);
// }