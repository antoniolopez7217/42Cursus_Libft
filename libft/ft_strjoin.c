/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:44:33 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/05 20:44:36 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	int		index_s;
	int		index_str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	index_str = 0;
	while (s1[index_str])
	{
		str[index_str] = s1[index_str];
		index_str++;
	}
	index_s = 0;
	while (s2[index_s])
	{
		str[index_str] = s2[index_s];
		index_str++;
		index_s++;
	}
	str[index_str] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char s1[] = "Hello";
// 	char s2[] = " World";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }