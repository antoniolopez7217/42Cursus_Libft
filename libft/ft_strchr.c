/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:29:31 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 22:29:33 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "Hello World ?";
// 	char s2 = 'l';
// 	char s3 = '\0';
// 	printf("%s\n", ft_strchr(s1, s2));
// 	printf("%s\n", ft_strchr(s1, s3));
// 	printf("%s\n", strchr(s1, s2));
// 	printf("%s\n", strchr(s1, s3));
// }