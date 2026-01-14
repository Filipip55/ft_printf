/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:28:42 by icoman            #+#    #+#             */
/*   Updated: 2026/01/14 16:09:53 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...);
int	putstr(char *s);
int puthex(unsigned int n, char format);
int	putnbr(long n);
