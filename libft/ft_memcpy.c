/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:28:45 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/27 16:13:44 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst1;
	unsigned const char	*src1;

	dst1 = dst;
	src1 = src;
	if (dst == 0 && src == 0)
		return (0);
	else
	{
		while (n > 0)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
			n--;
		}
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char	test[] = "Test";
	char	dest[20];

	printf("%s\n", ft_memcpy(dest, test, 4));
	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 4));
//	printf("%s\n", memcpy(dest, ((void *)0) , 4));
	printf("%s\n", memcpy(((void *)0), ((void *)0) , 4));
//	printf("%s\n", memcpy(((void *)0), test , 4));
	return (0);
}
*/
