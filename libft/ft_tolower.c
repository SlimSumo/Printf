/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:09:37 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/15 15:52:31 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
#include<ctype.h>
#include<stdio.h>

int	main()
{
	int a;

	a = 70;
	printf("%c\n", ft_tolower(a));
	printf("%c\n", tolower(a));
	return (0);
}
*/
