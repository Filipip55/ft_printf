/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:30:05 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 20:55:34 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	printf("ft version \n");
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit('1'));
	printf("libc version \n");
	printf("%d\n", isdigit('c'));
	printf("%d\n", isdigit('1'));
}
*/