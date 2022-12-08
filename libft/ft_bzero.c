/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:49:43 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/18 14:55:08 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;

	ss = s;
	while (n > 0)
	{
		*ss = 0;
		ss++;
		n--;
	}
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char	test[] = "Hello my friend";
	
	printf("%sa\n", test);
	ft_bzero(test, 5);
	printf("%sa\n", test);
	printf("%sa\n", bzero(test, 5));
	printf("%sa\n", test);
	return (0);
}
*/
