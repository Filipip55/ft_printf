/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:51:01 by icoman            #+#    #+#             */
/*   Updated: 2026/01/12 17:30:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_content(unsigned char *p)
{
	const char		*cifrario_hex;
	unsigned int	i;

	cifrario_hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		ft_putchar(cifrario_hex[p[i] / 16]);
		ft_putchar(cifrario_hex[p[i] % 16]);
		i++;
	}
}

char    *convert_hex(int nbr)
{
	char *codex;

	codex = "0123456789abcdef";
}