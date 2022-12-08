/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:33:01 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:51:10 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_printf.h"

void	ft_putnbr_pf(int *count, int n)
{
	char	temp;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_pf(count, '-');
			n = n * -1;
		}
		if (n >= 0 && n <= 9)
		{
			temp = n + 48;
			ft_putchar_pf(count, temp);
		}
		if (n > 9)
		{		
			ft_putnbr_pf(count, n / 10);
			ft_putnbr_pf(count, n % 10);
		}
	}
}
