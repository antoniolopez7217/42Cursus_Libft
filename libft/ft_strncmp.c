/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:57:55 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 12:57:56 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	char s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char s2[] = "\x12\x02";
// 	char s3[] = "ello Wor6ld";
// 	printf("%d\n", ft_strncmp(s1, s2, 6));
// 	printf("%d\n", ft_strncmp(s2, s1, 6));
// 	printf("%d\n\n", ft_strncmp(s3, s1, 6));
// 	printf("%d\n", strncmp(s1, s2, 6));
// 	printf("%d\n", strncmp(s2, s1, 6));
// 	printf("%d\n", strncmp(s3, s1, 6));
// }
