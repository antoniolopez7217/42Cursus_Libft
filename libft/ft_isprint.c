/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:59:50 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/30 20:59:52 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char a = 'a';
// 	char b = 'A';
// 	int c = 127;
// 	printf("%d\n", ft_isprint(a));
// 	printf("%d\n", ft_isprint(b));
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", isprint(a));
// 	printf("%d\n", isprint(b));
// 	printf("%d\n", isprint(c));
// 	return (0);
// }
