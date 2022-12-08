/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:35:58 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/22 21:39:41 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_write(char *dst, int n, int count, int flag)
{
	if (n == -2147483648)
	{
		count = count + flag - 1;
		dst[count] = '8';
		count--;
		n = 214748364;
	}
	if (n >= 0 && n <= 9)
	{
		count = count + flag - 1;
		dst[count] = n + 48;
	}
	if (n > 9)
	{
		count = count + flag - 1;
		while (n != 0)
		{
			dst[count] = (n % 10) + 48;
			count--;
			n = n / 10;
		}
	}
	if (flag == 1)
		dst[0] = '-';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;
	int		temp;
	int		flag;

	count = 0;
	temp = n;
	flag = 0;
	if (n == 0)
		count++;
	if (temp < 0)
	{
		flag = 1;
		n = n * -1;
	}
	while (temp != 0)
	{
		count++;
		temp = temp / 10;
	}
	dst = ft_calloc((count + 1 + flag), sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_write(dst, n, count, flag);
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(1000034));
	return (0);
}
*/
