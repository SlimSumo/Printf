/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:51:16 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/28 19:44:43 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
#include<stdio.h>

int main()
{
	//int	count = 8539;
	int	count = 42 * 3;
	//void	*d1 = ft_calloc(count, sizeof(int));
	//void	*d2 = calloc(count, sizeof(int));

	//printf("%p\n", ft_calloc(12, sizeof(int)));
	printf("%p\n", calloc(count, sizeof(char)));
	printf("%p\n", ft_calloc(count, sizeof(char)));
	//printf("%d\n", memcmp(d1, d2, size * sizeof(int)));
	return (0);
}
*/
