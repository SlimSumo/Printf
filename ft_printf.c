/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:45:32 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/10 17:07:11 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	ft_condition(const char *string, int i, int count, va_list args)
{
	if (string[i + 1] == 'c')
		if (ft_putchar_pf(&count, va_arg(args, int)) == -1)
			return (-1);
	if (string[i + 1] == 's')
		ft_putstr_pf(&count, va_arg(args, char *));
	if (string[i + 1] == 'p')
		ft_putptr_fd(&count, va_arg(args, unsigned long));
	if (string[i + 1] == 'd')
		ft_putnbr_pf(&count, va_arg(args, int));
	if (string[i + 1] == 'i')
		ft_putnbr_pf(&count, va_arg(args, int));
	if (string[i + 1] == 'u')
		ft_putunbr_fd(&count, va_arg(args, unsigned int));
	if (string[i + 1] == 'x')
		ft_putxnbr_fd(&count, va_arg(args, unsigned int));
	if (string[i + 1] == 'X')
		ft_putgxnbr_fd(&count, va_arg(args, unsigned int));
	if (string[i + 1] == '%')
		ft_putchar_pf(&count, '%');
	return (count);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	va_start(args, string);
	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '%')
			ft_putchar_pf(&count, string[i]);
		else if (string[i] == '%')
		{
			count = ft_condition(string, i, count, args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	int		test = 247;
	int		result = 0;
	int		ftresult = 0;

	write (1, "\001\n", 2);
	ftresult = ft_printf("\001\n");
	printf("\n");
	printf("%d", ftresult);
	printf("\n");
	result = printf("\001\n");
	printf("\n");
	printf("%d\n", result);
	return (0);
}
*/
