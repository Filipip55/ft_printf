/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:52:50 by filip             #+#    #+#             */
/*   Updated: 2026/01/14 16:13:11 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
 	va_list args;
	int	i;
	int	char_count;
	
	if (str == NULL)
		return (-1);
	i = 0;
	char_count = 0;
	va_start(args, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			i++;
			else if (str[i] == 'c')
			{
				char c = va_arg(args, int);
                char_count += write(1, &c, 1);
			}
			else if (str[i] == 's')
				char_count += putstr(va_arg(args, char *));
			else if (str[i] == 'p')
			
			else if (str[i] == 'd' || str[i] == 'i')
				char_count += putnbr(va_arg(args, int));
			else if (str[i] == 'u')
				char_count += putnbr(va_arg(args, unsigned int));
			else if (str[i] == 'x')
				char_count += puthex(va_arg(args, unsigned int), 'x');
			else if (str[i] == 'X')
				char_count += puthex(va_arg(args, unsigned int), 'X');
			else if (str[i] == '%')
				char_count += write(1, &str[i], 1);
		} else
		{
			ft_putchar_fd(str[i++], 1);
		}
	}
	va_end(args);
	return (char_count);
}
