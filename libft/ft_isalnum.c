/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:41:31 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:37:01 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	isalnum;

	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		isalnum = 1;
	else
		isalnum = 0;
	return (isalnum);
}
/*
#include<stdio.h>
#include <ctype.h>
int main()
{
	int test = 110;

	printf("%d\n", ft_isalnum(test));
	printf("%d\n", isalnum(test));
	return (0);
}
*/
