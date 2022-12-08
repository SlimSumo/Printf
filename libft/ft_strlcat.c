/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:08:04 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 19:43:35 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	n;

	i = 0;
	j = 0;
	k = 0;
	while (src[k] != '\0')
		k++;
	while (dst[j] != '\0')
		j++;
	n = j;
	if (dstsize < j)
		return (dstsize + k);
	if (dstsize > j + 1)
	{
		while (src[i] != '\0' && j != (dstsize - 1))
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (n + k);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char	src[] = "the cake is a lie !";
	char	dest[50] = "there is no stars in the sky";

	printf("%zu\n", ft_strlcat(dest, src, 23));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, 23));
	printf("%s\n", dest);
	return (0);
}
*/
