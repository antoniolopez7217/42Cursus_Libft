/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:40:24 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/01 22:40:26 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char a = 'a';
// 	char b = 'A';
// 	char c = '5';
// 	printf("%d\n", ft_toupper(a));
// 	printf("%d\n", ft_toupper(b));
// 	printf("%d\n", ft_toupper(c));
// 	printf("%d\n", toupper(a));
// 	printf("%d\n", toupper(b));
// 	printf("%d\n", toupper(c));
// 	return (0);
// }