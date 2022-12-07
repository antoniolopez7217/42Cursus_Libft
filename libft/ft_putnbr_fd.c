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
	long int	numb;

	numb = n;
	if (numb < 0)
	{
		write(fd, "-", 1);
		numb = numb * (-1);
	}
	if (numb > 9)
	{	
		ft_putnbr_fd(numb / 10, fd);
		ft_putnbr_fd(numb % 10, fd);
	}
	if (numb < 10)
		ft_putchar_fd(numb + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(45, 1);
// 	ft_putnbr_fd(-45, 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
