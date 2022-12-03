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

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] == '\0')
			return ((s2[i]) * (-1));
		if (s2[i] == '\0')
			return (s1[i]);
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "ld9";
// 	char s2[] = "Hel9lo Zorld";
// 	char s3[] = "ello Wor6ld";
// 	printf("%d\n", ft_strncmp(s1, s2, 9));
// 	printf("%d\n", ft_strncmp(s1, s2, 6));
// 	printf("%d\n", ft_strncmp(s2, s1, 6));
// 	printf("%d\n\n", ft_strncmp(s3, s1, 6));

// 	printf("%d\n", strncmp(s1, s2, 9));
// 	printf("%d\n", strncmp(s1, s2, 6));
// 	printf("%d\n", strncmp(s2, s1, 6));
// 	printf("%d\n", strncmp(s3, s1, 6));
// }
