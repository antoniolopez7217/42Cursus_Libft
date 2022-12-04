/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:53:32 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 22:53:34 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = 0;
	while (s[len])
		len++;
	i = len;
	while (i > 0)
	{
		if (s[i - 1] == c)
			return ((char *)&s[i - 1]);
		i--;
	}
	if (c == 0)
		return ((char *)&s[len]);
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "abbbbbbbb";
// 	char s2 = 'a';
// 	char s3 = 'b';
// 	printf("%s\n", ft_strrchr(s1, s2));
// 	printf("%s\n", ft_strrchr(s1, s3));
// 	printf("%s\n", strrchr(s1, s2));
// 	printf("%s\n", strrchr(s1, s3));
// }
