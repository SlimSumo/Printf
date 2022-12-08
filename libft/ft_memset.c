/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:14:12 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/18 15:26:32 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;

	bb = b;
	while (len > 0)
	{
		*bb = c;
		bb++;
		len--;
	}
	return (b);
}
/*
#include<stdio.h>
#include <string.h>
int main()
{
	char	test[] = "Hello my friend";

	printf("%s\n", ft_memset(test, 'a', sizeof(char) *10));
	printf("%s\n", memset(test, 'a', sizeof(char) *10));
	return (0);
}
*/
