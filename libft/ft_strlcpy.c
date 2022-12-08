/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:35:02 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/20 14:59:08 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize != 0)
	{
		while (src[j] != '\0' && j < dstsize - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char test[] = "Hello stranger, how are you ?";
	char dest[20];

	printf("%zu\n", ft_strlcpy(dest, test, 15));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, test, 15));
	printf("%s\n", dest);
	return (0);
}
*/
