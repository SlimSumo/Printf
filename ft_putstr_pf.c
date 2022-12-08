/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:10:11 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:39:27 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_putstr_pf(int *count, char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		*count += 6;
		write(1, "(null)", 6);
		return (-1);
	}
	while (s[i] != '\0')
	{
		if (write(1, &s[i], 1) == -1)
			return (-1);
		else
		{
			*count += 1;
		}
		i++;
	}
	return (0);
}
