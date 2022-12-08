/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:17:13 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/17 15:12:07 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i]
		&& (unsigned char)*(s1 + i) == (unsigned char)*(s2 + i)
		&& i < n - 1)
	{
		i++;
	}
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
	char	*ligne1;
	char	*ligne2;
	size_t	i;

	ligne1 = "abcdefgh";
	ligne2 = "abcdwxyz";
	i = 4;

	printf("%d\n", ft_strncmp(ligne1, ligne2, i));
	printf("%d\n", strncmp(ligne1, ligne2, i));
	return (0);
}
*/
