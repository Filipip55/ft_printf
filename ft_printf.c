/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:52:50 by filip             #+#    #+#             */
/*   Updated: 2026/01/14 18:22:58 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_formatters(va_list args, const char *str, int i, int char_count)
{
	if (str[i] == 'c')
			{
				char c = va_arg(args, int);
                char_count += write(1, &c, 1);
			}
			else if (str[i] == 's')
				char_count += put_str(va_arg(args, char *));
			else if (str[i] == 'p')
			{
				void *ptr = va_arg(args, void *);
				char_count += put_ptr((unsigned long long)ptr);	
			}
			else if (str[i] == 'd' || str[i] == 'i')
				char_count += put_nbr(va_arg(args, int));
			else if (str[i] == 'u')
				char_count += put_nbr(va_arg(args, unsigned int));
			else if (str[i] == 'x')
				char_count += put_hex(va_arg(args, unsigned int), 'x');
			else if (str[i] == 'X')
				char_count += put_hex(va_arg(args, unsigned int), 'X');
			else if (str[i] == '%')
				char_count += write(1, &str[i], 1);
}

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
	while (i < (int)ft_strlen(str))
	{
		if (str[i] == '%')
		{
			i++;
			check_formatters(args, str, i, char_count);
			i++;
		} else
			char_count += write(1, &str[i++], 1);
	}
	va_end(args);
	return (char_count);
}
