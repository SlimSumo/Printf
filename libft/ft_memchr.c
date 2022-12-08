/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:12:30 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/17 16:32:36 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s + i) != (unsigned char)c && i < n - 1)
	{
		i++;
	}
	if (*(unsigned char *)(s + i) == (unsigned char)c)
		return ((unsigned char *)(s + i));
	else
		return (NULL);
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
	char ligne[] = "abcde";
	int search;
	size_t n;

	search = 'd';
	n = 5;
	printf("%p\n", ft_memchr(ligne, search, n));
	printf("%p\n", memchr(ligne, search, n));
	return (0);
}
*/
