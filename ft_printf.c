/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:52:50 by filip             #+#    #+#             */
/*   Updated: 2026/01/12 17:03:00 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
 	va_list args;
	int	i;
	
	va_start(args, str);
	while (i < strlen(str))
	{
		if (str[i] == "%")
		{
			i++;
			if (str[i] == "c")
			{
				ft_putchar_fd(va_arg(args, char), 1);
			}
			if (str[i] == "s")
			{
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			if (str[i] == "p")
			{
				
			}
			if (str[i] == "d")
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			if (str[i] == "i")
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			if (str[i] == "u")
			{
				ft_putnbr_fd(va_arg(args, unsigned int), 1);
			}
			if (str[i] == "x")
			{
				
			}
			if (str[i] == "X")
			{
				
			}
			if (str[i] == "%")
			{
				ft_putchar_fd('%', 1);
			}
		} else
		{
			ft_putchar_fd(str[i++], 1);
		}
	}
	return (0);
} 
