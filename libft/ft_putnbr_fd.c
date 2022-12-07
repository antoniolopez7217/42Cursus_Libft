/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:20:30 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/07 19:20:32 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	p;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * (-1);
		}
		if (n > 9)
		{	
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		if (n < 10)
		{
			p = n + '0';
			write(fd, &p, 1);
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(45, 1);
// 	ft_putnbr_fd(-45, 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
