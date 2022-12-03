/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:31:18 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/29 23:31:20 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char a = 'a';
// 	char b = 'A';
// 	char c = '5';
// 	printf("%d\n", ft_isdigit(a));
// 	printf("%d\n", ft_isdigit(b));
// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", isdigit(a));
// 	printf("%d\n", isdigit(b));
// 	printf("%d\n", isdigit(c));
// 	return (0);
// }