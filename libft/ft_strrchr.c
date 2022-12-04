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
	while (i - 1 >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == 0)
		return ((char *)&s[len]);
	return (0);
}

// int main(void)
// {
	// const char s1[] = "Hello World ?";
	// char s2 = 'o';
	// char s3 = '\0';
	// printf("%s\n", ft_strrchr(s1, s2));
	// printf("%s\n", ft_strrchr(s1, s3));
	// printf("%s\n", strrchr(s1, s2));
	// printf("%s\n", strrchr(s1, s3));
// }
