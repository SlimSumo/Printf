/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:44:18 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:52:42 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_printf.h"

void	ft_putaddress_fd(int *count, unsigned long n)
{
	if (n > 15)
	{		
		ft_putaddress_fd(count, n / 16);
		ft_putaddress_fd(count, n % 16);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_pf(count, n + 48);
	}
	else if (n >= 10 && n <= 15)
	{
		ft_putchar_pf(count, n + 87);
	}
}

void	ft_putptr_fd(int *count, unsigned long n)
{
	write (1, "0x", 2);
	*count += 2;
	ft_putaddress_fd(count, n);
}
/*
#include <stdio.h>
int main()
{
	char	*test;

	ft_putaddress_fd((unsigned long)test, 1);
	printf("\n%p\n", test);
	return (0);
}
*/
