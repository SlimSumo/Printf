/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:33:19 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/18 16:34:05 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)
		&& i < n - 1)
	{
		i++;
	}
	if (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		return (0);
	else
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
	char	ligne1[] = "TesTeste";
	char	ligne2[] = "Teste";
	size_t	n;

	n = 0;
	printf("%d\n", ft_memcmp(ligne1, ligne2, n));
	printf("%d\n", memcmp(ligne1, ligne2, n));
	return (0);
}
*/
