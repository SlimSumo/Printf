/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putgxnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:12:54 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:39:13 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putgxnbr_fd(int *count, unsigned int n)
{
	if (n > 15)
	{		
		ft_putgxnbr_fd(count, n / 16);
		ft_putgxnbr_fd(count, n % 16);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_pf(count, n + 48);
	}
	else if (n >= 10 && n <= 15)
	{
		ft_putchar_pf(count, n + 55);
	}
}
/*
#include <stdio.h>
int main()
{
	unsigned int	nbr = -967296;
	unsigned int nbr2 = 4294000000;

	ft_putgxnbr_fd(nbr2, 1);
	printf("\n%X\n", nbr);
	return (0);
}
*/
