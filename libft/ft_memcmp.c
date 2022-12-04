/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:45 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 21:32:46 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
// 	char s2[] = "\xff\0\0\xaa\0\xde\x00MBS";
// 	char s3[] = "ld9";
// 	printf("%d\n", ft_memcmp(s1, s2, 9));
// 	printf("%d\n", ft_memcmp(s2, s1, 6));
// 	printf("%d\n\n", ft_memcmp(s3, s1, 3));
// 	printf("%d\n", memcmp(s1, s2, 9));
// 	printf("%d\n", memcmp(s2, s1, 6));
// 	printf("%d\n", memcmp(s3, s1, 3));
// }