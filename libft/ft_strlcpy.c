/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:05:39 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/01 23:05:41 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	i = 0;
	while (src[len_src])
		len_src++;
	if (size != 0)
	{	
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}

// int main (void)
// {
// 	const char src[5] = "Hello";
// 	char dst[4] = "By0e";
//	char dst2[4] = "By0e";
//	const char src2[5] = "Hello";
// 	size_t len;
// 	len = ft_strlcpy(dst, src, 3);
// 	printf("src= %s\ndst= %s\n", src, dst);
// 	printf("len_src= %ld\n", len);
//	printf("src2= %s\ndst2= %s\n", src2, dst2);
//	len = strlcpy(dst2, src2, 3);
//	printf("src2= %s\ndst2= %s\n", src2, dst2);
//	printf("len_src2= %ld", len);
// 	return (0);
// }
