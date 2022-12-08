/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:06:55 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/21 17:12:43 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	if (ft_strlen(needle) > len && haystack != NULL)
		return (NULL);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (haystack[i] != '\0' && len >= ft_strlen(needle))
	{
		if (ft_memcmp((haystack + i), needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		else
		{
			i++;
			len--;
		}
	}
	return (NULL);
}
/*
size_t	ft_strlen(const char *s);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int main()
{
	const char	needle[] = "aabc";
	const char	haystack[] = "aacdaaabc0000000000";
	size_t		len = 20;

	printf("%p\n", ft_strnstr(haystack, needle, len));
	printf("%p\n", strnstr(haystack, needle, len));
	//printf("%p\n", ft_strnstr(((void *)0), ((void *)0), len));
	//printf("%p\n", strnstr(((void *)0), ((void *)0), len));
	return (0);
}
*/
