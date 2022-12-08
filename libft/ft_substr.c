/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:30:34 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/27 19:47:51 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	sizes;
	size_t	i;

	i = 0;
	if (s)
	{
		sizes = ft_strlen(s);
		if (start >= sizes)
			len = 0;
		else if (len > sizes)
			len = sizes - start;
		else if ((len + start) > sizes)
			len = len - 1;
	}
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	while (i < len)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
/*
#include<stdio.h>

int main()
{
	char	ligne[] = "";

	printf("%s\n", ft_substr(ligne, 1, 1));
	return (0);
}
*/
