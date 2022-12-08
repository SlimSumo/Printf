/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:54:26 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/15 17:04:25 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}
/*
#include<string.h>
#include<stdio.h>

int	main()
{
	char	*ligne;
	int		search;

	ligne = "Abcde";
	search = 357;
	
	printf("%p\n", ft_strchr(ligne, search));
	printf("%p\n", strchr(ligne, search));
	return (0);
}
*/
