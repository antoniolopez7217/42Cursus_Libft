/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:15:00 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/30 21:15:02 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	count;
	
	count = 0;
	while(s[count])
		count++;
	return (count);
}

// int	main(void)
// {
// 	char a[20] = "Hello World";
// 	char b[20] = "";
// 	char c[20] = "H420.";
// 	printf("%ld\n", ft_strlen(a));
// 	printf("%ld\n", ft_strlen(b));
// 	printf("%ld\n", ft_strlen(c));
// 	printf("%ld\n", strlen(a));
// 	printf("%ld\n", strlen(b));
// 	printf("%ld\n", strlen(c));
// 	return (0);
// }