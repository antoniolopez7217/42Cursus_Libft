/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:57:40 by antlopez          #+#    #+#             */
/*   Updated: 2022/12/10 12:57:41 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void f(unsigned int i, char *c)
// {
// 	(void)	i;
// 	*c = *c - 32;
// }

// int main()
// {
// 	char str1[] = "hello";
// 	printf("Before: %s\n", str1);
// 	ft_striteri(str1, *f);
// 	printf("After: %s\n", str1);
// }