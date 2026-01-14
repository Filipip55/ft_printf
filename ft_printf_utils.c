/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:51:01 by icoman            #+#    #+#             */
/*   Updated: 2026/01/14 16:11:16 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int puthex(unsigned int n, char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += puthex(n / 16, format);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	putnbr(long n)
{
	int	char_count;
	char	c;

	char_count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		char_count++;
	}
	if (n >= 10)
		char_count += putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (char_count + 1);
}
