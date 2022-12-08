/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:04:53 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:38:15 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	isprt;

	if (c >= 32 && c <= 126)
		isprt = 1;
	else
		isprt = 0;
	return (isprt);
}
/*
#include<stdio.h>
#include <ctype.h>
int main()
{
	int	test = 26;

	printf("%d\n", ft_isprint(test));
	printf("%d\n", isprint(test));
	return (0);
}
*/
