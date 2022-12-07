/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:28:07 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/07 19:28:08 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if (i > 0)
			if (s[i] != c && s[i - 1] == c)
				count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;

	str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (str == NULL)
		return (0);
	while (s[i])
	{
		

	}
	
}

int	main(void)
{
	char	s[] = "Hello World";
	char	c = ' ';

	printf("%ld\n", ft_wordcount(s, c));
	return (0);
}
