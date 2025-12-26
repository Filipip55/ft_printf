/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:14:18 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:33:26 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
int main()
{
	int c;
	printf("ft version \n");
	c = ft_tolower('c');
	write(1, &c, 1);
	write(1, "\n", 1);
	c = ft_tolower('A');
	write(1, &c, 1);
	printf("\nlibc version \n");
	c = tolower('c');
	write(1, &c, 1);
	write(1, "\n", 1);
	c = tolower('A');
	write(1, &c, 1);
}
*/