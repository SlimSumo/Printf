/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:00:50 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/19 19:55:43 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	k;
	char	*dst;

	i = 0;
	k = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	while (i < len && s1[k] != '\0')
		dst[i++] = s1[k++];
	k = 0;
	while (i < len && s2[k] != '\0')
		dst[i++] = s2[k++];
	dst[i] = '\0';
	return (dst);
}
/*
#include<stdio.h>
int main()
{
	char	s1[] = "Ceci est";
	char	s2[] = " ";
	char	s3[] = "un test !";

	printf("%s\n",ft_strjoin (ft_strjoin(s1, s2), s3));
	return (0);
}
*/
