/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:30:51 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/29 23:30:55 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char a = 'a';
// 	char b = 'A';
// 	char c = '5';
// 	printf("%d\n", ft_isalpha(a));
// 	printf("%d\n", ft_isalpha(b));
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(a));
// 	printf("%d\n", isalpha(b));
// 	printf("%d\n", isalpha(c));
// 	return (0);
// }