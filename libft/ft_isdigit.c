/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:49:12 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:36:04 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	digit;

	if (c >= '0' && c <= '9')
		digit = 1;
	else
		digit = 0;
	return (digit);
}
/*
#include <ctype.h>
#include<stdio.h>
int main()
{
	int	num  = 1;

	printf("%d\n", ft_isdigit(num));
	printf("%d\n", isdigit(num));
	return (0);
}
*/
