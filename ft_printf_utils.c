/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:51:01 by icoman            #+#    #+#             */
/*   Updated: 2026/01/16 22:06:45 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	put_hex(unsigned int n, char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += put_hex(n / 16, format);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	put_nbr(long n)
{
	int		char_count;
	char	c;

	char_count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		char_count++;
	}
	if (n >= 10)
		char_count += put_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (char_count + 1);
}

int	ptr_to_hex(unsigned long long n)
{
	int		char_count;
	char	*cifrario;

	char_count = 0;
	cifrario = "0123456789abcdef";
	if (n >= 16)
		char_count += ptr_to_hex(n / 16);
	write(1, &cifrario[n % 16], 1);
	return (char_count + 1);
}

int	put_ptr(unsigned long long ptr)
{
	int	char_count;

	char_count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	char_count += write(1, "0x", 2);
	char_count += ptr_to_hex(ptr);
	return (char_count);
}
