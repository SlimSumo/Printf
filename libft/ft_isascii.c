/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:48 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:37:49 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	isasc;

	if (c >= 0 && c <= 127)
		isasc = 1;
	else
		isasc = 0;
	return (isasc);
}
/*
#include<stdio.h>
#include <ctype.h>
int main()
{
	int test = 130;

	printf("%d\n", ft_isascii(test));
	printf("%d\n", ft_isascii(test));
	return (0);
}
*/
