/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:36:44 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/04 11:36:45 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	int		i;

	s_copy = (char *)malloc(ft_strlen(s) + 1);
	if (s_copy == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

// int	main(void)
// {
// 	char s[11] = "Hello World";
// 	printf("%s\n", ft_strdup(s));
// 	printf("%s\n", strdup(s));
// 	return (0);
// }
