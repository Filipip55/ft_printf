/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:39:26 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 20:45:33 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}
/*
int main()
{
	printf("ft version \n");
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('c'));
	printf("libc version \n");
	printf("%d\n", isprint('\n'));
	printf("%d\n", isprint('1'));
}
*/