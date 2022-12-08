/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:52:02 by rbouchar          #+#    #+#             */
/*   Updated: 2022/11/02 19:50:58 by rbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

int			ft_printf(const char *n, ...);
void		ft_putunbr_fd(int *count, unsigned int n);
void		ft_putptr_fd(int *count, unsigned long n);
void		ft_putxnbr_fd(int *count, unsigned int n);
void		ft_putgxnbr_fd(int *count, unsigned int n);
int			ft_putchar_pf(int *count, char c);
int			ft_putstr_pf(int *count, char *s);
void		ft_putnbr_pf(int *count, int n);

#endif
