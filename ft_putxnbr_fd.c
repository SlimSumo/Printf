/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:45:52 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:53:14 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putxnbr_fd(int *count, unsigned int n)
{
	if (n > 15)
	{		
		ft_putxnbr_fd(count, n / 16);
		ft_putxnbr_fd(count, n % 16);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_pf(count, n + 48);
	else if (n >= 10 && n <= 15)
		ft_putchar_pf(count, n + 87);
}
/*
#include <stdio.h>
int main()
{
	unsigned int	nbr = -967296;
	unsigned int nbr2 = 4294000000;

	ft_putxnbr_fd(nbr2, 1);
	printf("\n%x\n", nbr);
	return (0);
}
*/
