/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:23:42 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 21:23:43 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "Hello World ?";
// 	char s2 = 'o';
// 	char s3 = 'l';
// 	char *sol;
// 	sol = ft_memchr(s1, s2, 12);
// 	printf("%s\n", sol);
// 	sol = ft_memchr(s1, s3, 12);
// 	printf("%s\n", sol);
// 	sol = memchr(s1, s2, 12);
// 	printf("%s\n", sol);
// 	sol = memchr(s1, s3, 12);
// 	printf("%s\n", sol);
// }