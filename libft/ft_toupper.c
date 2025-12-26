/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:09:12 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:33:28 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int main()
{
	int c;
	printf("ft version \n");
	c = ft_toupper('c');
	write(1, &c, 1);
	write(1, "\n", 1);
	c = ft_toupper('A');
	write(1, &c, 1);
	printf("\nlibc version \n");
	c = toupper('c');
	write(1, &c, 1);
	write(1, "\n", 1);
	c = toupper('A');
	write(1, &c, 1);
}
*/