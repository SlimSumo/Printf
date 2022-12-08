/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:01:46 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:38:03 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(int *count, unsigned int n)
{
	if (n > 9)
	{		
		ft_putunbr_fd(count, n / 10);
		ft_putunbr_fd(count, n % 10);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_pf(count, n + 48);
	}
}
/*
int main()
{
	unsigned int	nbr = 4294967295;

	ft_putxnbr_fd(nbr, 1);
	return (0);
}
*/
