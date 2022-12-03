/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:03:59 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 13:04:00 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (big[0] == '\0')
		return (0);
	i = 0;
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "Hello World ?";
// 	const char s2[] = "elloZ";
// 	const char s3[] = "World";
// 	printf("%s\n", ft_strnstr(s1, s2, 3));
// 	printf("%s\n", ft_strnstr(s1, s3, 15));
// 	printf("%s\n", ft_strnstr(s2, s3, 2));
// }