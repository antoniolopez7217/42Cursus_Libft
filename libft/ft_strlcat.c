/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:35:03 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/01 23:35:05 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dst)
		return (len_src + size);
	i = len_dst;
	j = 0;
	while (src[j] && j < (size - len_dst - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// int main(void)
// {
// 	const char src[] = "World";
// 	char dst[20] = "Hello ";
// 	char dst2[20] = "Hello";

// 	printf("len= %ld\n", ft_strlcat(dst, src, 20));
// 	printf("src= %s\ndst= %s\n", src, dst);
// 	printf("len= %u\n", strlcat(dst2, src, 20));
// 	printf("src= %s\ndst2= %s\n", src, dst);
// 	return (0);
// }
