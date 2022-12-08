/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:50:20 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/01 16:41:32 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_free(char **dst, size_t k)
{
	while (k >= 0)
	{
		free(dst[k]);
		k--;
	}
}

char	**ft_copystr(char const *s, char **dst, char c, size_t nbstring)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	j = 0;
	while (s[i] != '\0' && k < nbstring)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			dst[k][j++] = s[i++];
		dst[k][j] = '\0';
		k++;
		j = 0;
	}
	dst[k] = 0;
	return (dst);
}

char	**ft_strsizemalloc(char const *s, char **dst, char c, size_t nbstring)
{
	size_t	i;
	size_t	k;
	size_t	count;

	i = 0;
	k = 0;
	while (k < nbstring)
	{
		count = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		dst[k] = (char *)malloc((count + 1) * sizeof(char));
		if (dst[k] == NULL)
		{
			ft_free(dst, k);
			return (NULL);
		}
		k++;
	}	
	return (dst);
}

size_t	ft_nbstring(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		while (s[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	countstr;

	if (!s)
		return (NULL);
	countstr = ft_nbstring(s, c);
	dst = (char **)malloc((countstr + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	ft_strsizemalloc(s, dst, c, countstr);
	ft_copystr(s, dst, c, countstr);
	return (dst);
}
/*
#include<stdio.h>

int main()
{
	char	ligne[] = "Hello!";
	char	c = ' ';
	char	**split;

	printf("%zu\n", ft_nbstring(ligne, c));
	split = ft_split(ligne, c);
	size_t i = 0;
	while (i < ft_nbstring(ligne, c)) 
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
*/
