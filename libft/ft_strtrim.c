/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:17:36 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/31 18:06:18 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	while (k > i && ft_strrchr(set, s1[k - 1]) != NULL)
		k--;
	dst = malloc((k + 1 - i) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < k)
		dst[j++] = s1[i++];
	dst[j] = '\0';
	return (dst);
}
/*
#include<stdio.h>

int main()
{
	char	ligne[] = "abocdtestcdab";
	char	set[] = "abcd";

//	printf("%lu\n", strlen(ligne));
	printf("%s\n", ft_strtrim(ligne, set));
	return (0);
}
*/
