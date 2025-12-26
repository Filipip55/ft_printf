/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:34:24 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:32:36 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("ft version \n");
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii('c'));
	printf("libc version \n");
	printf("%d\n", isascii('c'));
	printf("%d\n", isascii('1'));
}
*/