/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:08:17 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/03 14:08:19 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	number = 0;
	while ((nptr[i] >= '0' && nptr[i] <= '9') || nptr[i] == '\0')
	{
		if (nptr[i] == '\0')
			return (number * sign);
		number = (number * 10) + (nptr[i] - 48);
		if (nptr[i + 1] < '0' || nptr[i + 1] > '9')
			return (number * sign);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char nptr[] = "-1234ab567";
// 	printf("%d\n", ft_atoi(nptr));
// 	printf("%d\n\n", atoi(nptr));
// 	char nptr1[] = " +1234ab567";
// 	printf("%d\n", ft_atoi(nptr1));
// 	printf("%d\n\n", atoi(nptr1));
// 	char nptr2[] = "\t-+12a34ab567";
// 	printf("%d\n", ft_atoi(nptr2));
// 	printf("%d\n\n", atoi(nptr2));
// 	char nptr3[] = "+12+56434";
// 	printf("%d\n", ft_atoi(nptr3));
// 	printf("%d\n\n", atoi(nptr3));
// 	return (0);
// }