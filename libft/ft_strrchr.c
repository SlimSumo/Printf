/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:04:38 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/15 17:16:51 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c && i != 0)
		i--;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char	*ligne;
	int		search;

	ligne = "abcde";
	search = 327;
	printf("%p\n", ft_strrchr(ligne, search));
	printf("%p\n", strrchr(ligne, search));
	return (0);
}
*/
