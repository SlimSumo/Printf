/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:02:33 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/20 15:13:57 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1) + 1;
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, size);
	return (ptr);
}
/*
#include<stdio.h>
int main()
{
	char	ligne[] = "This is a normal test";
	//int		r_size = strlen(ligne);
	//int 	size;

	printf("%lu\n", strlen(ligne));
	printf("%zu\n", ft_strlen(ligne));
	//printf("%s\n", ft_strdup(ligne));
	//printf("%s\n", strdup(ligne));
	return (0);
}
*/
