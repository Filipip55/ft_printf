/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:28:42 by icoman            #+#    #+#             */
/*   Updated: 2026/01/16 21:49:13 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	put_str(char *s);
int	put_hex(unsigned int n, char format);
int	put_ptr(unsigned long long ptr);
int	ptr_to_hex(unsigned long long n);
int	put_nbr(long n);
#endif