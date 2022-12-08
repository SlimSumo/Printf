/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:00:13 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:43:08 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>

int main()
{
	int a;

	a = 55;
	printf("%c\n", ft_toupper(a));
	printf("%c\n", toupper(a));
	return (0);
}
*/
