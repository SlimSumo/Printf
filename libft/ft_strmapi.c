/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:19:22 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/27 16:40:06 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*ptr;

	len = ft_strlen(s);
	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
char	ft_test(unsigned int a, char b)
{
	char	ptr;
	
	a = 32;
	if (b >= 'a' && b <= 'z')	
		ptr = b - a;
	else
		ptr = b;
	return (ptr);
}

char	ft_test2(unsigned int a, char b)
{
	char ptr;

	a = 32;
	if (b >= 'A' && b <= 'Z')
		ptr = b + a;
	else
		ptr = b;
	return (ptr);
}

#include <stdio.h>

int main()
{
	char	ligne[] = "tEst";
	
	printf("%s\n", ft_strmapi(ligne, *ft_test));
	printf("%s\n", ft_strmapi(ligne, *ft_test2));
	return (0);
}
*/
