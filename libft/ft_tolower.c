/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:54:42 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/01 22:54:45 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	char a = 'a';
// 	char b = 'A';
// 	char c = '5';
// 	printf("%d\n", ft_tolower(a));
// 	printf("%d\n", ft_tolower(b));
// 	printf("%d\n", ft_tolower(c));
// 	printf("%d\n", tolower(a));
// 	printf("%d\n", tolower(b));
// 	printf("%d\n", tolower(c));
// 	return (0);
// }
