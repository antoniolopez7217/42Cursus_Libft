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

#include <stdlib.h>
#include <stdio.h>

int	check_char(char *nptr)
{
	if (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		return (1);
	else if (*nptr == '-' || *nptr == '+')
		return (2);
	else if (*nptr >= '0' && *nptr <= '9')
		return (3);
	else
		return (0);
}

void	check_sign(char *nptr, int *sign)
{
	if (*nptr == '-')
		*sign = *sign * (-1);
}

int ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	while (check_char(&nptr[i]) == 1)
		i++;
	sign = 1;
	while (nptr[i] && check_char(&nptr[i]) == 2)
	{
		check_sign(&nptr[i], &sign);
		i++;
	}
	number = 0;
	while (check_char(&nptr[i]) == 3 || nptr[i] == '\0')
	{
		if (nptr[i] == '\0')
			return (number * sign);
		number = (number * 10) + (nptr[i] - 48);
		if (check_char(&nptr[i + 1]) != 3)
			return (number * sign);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char nptr[] = "---+--+1234ab567";
// 	printf("%d\n", ft_atoi(nptr));
// 	char nptr1[] = "-- -+--+1234ab567";
// 	printf("%d\n", ft_atoi(nptr1));
// 	char nptr2[] = "\t---+--+12a34ab567";
// 	printf("%d\n", ft_atoi(nptr2));
// 	char nptr3[] = "-+-+-+-+-+-+12+56434";
// 	printf("%d\n", ft_atoi(nptr3));
// 	return (0);
// }

