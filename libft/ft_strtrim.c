/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:08:32 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/05 21:08:34 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"
//#include "ft_substr.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && (s1[start] == set))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && (s1[end] == set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// int	main(void)
// {
// 	char s1[] = "aaaa1234aaaa";
// 	char set[] = "a";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }