/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:08:46 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 16:35:13 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	alpha;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		alpha = 1;
	else
		alpha = 0;
	return (alpha);
}
/*
#include <ctype.h>
#include<stdio.h>
int main()
{
	int	cha	= 107;

	printf("%d\n", ft_isalpha(cha));
	printf("%d\n", isalpha(cha));
	return (0);
}
*/
