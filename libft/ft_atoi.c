/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:54:04 by rbouchar          #+#    #+#             */
/*   Updated: 2022/10/18 18:48:40 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10
		|| str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	if (str[i] == '-')
		flag = -1;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = (count * 10) + (str[i++] - 48);
	}
	return (count * flag);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char test[] = "54";

	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
	return (0);
}
*/
