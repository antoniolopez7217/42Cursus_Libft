/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:31:35 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/06 19:31:38 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	len--;
	while (n >= 10)
	{
		str[len] = (n % 10) + '\0';
		n = n / 10;
		len--;
	}
	str[len] = n + '\0';
	return (str);
}

int	main(void)
{
	int n = 150;

	printf("%d\n", ft_intlen(n));
	printf("%s\n", ft_itoa(n));
	return (0);
}