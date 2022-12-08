/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:03:32 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/27 16:14:52 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (src > dst)
	{
		while (len != 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
			len--;
		}
	}
	else if (src < dst)
	{
		while (len != 0)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len--;
		}
	}
	return (dst);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	char	test[] = "Hello stranger";
	//char	dest[10];

	//printf("%s\n", ft_memmove(dest, test, 4));
	//printf("%s\n", memmove(dest, test, 4));
	//printf("%s\n", memmove(dest, test2, 20));
	//printf("%s\n", ft_memmove(((void *)0), ((void *)0), 20));
	//printf("%s\n", memmove(((void *)0), ((void *)0), 20));
	//printf("%s\n", memmove(((void *)0), test, 20));
	printf("%s\n", ft_memmove(((void *)0), test, 20));
	return (0);
}
*/
