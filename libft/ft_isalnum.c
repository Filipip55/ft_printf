/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:32:24 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:32:31 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int main()
{
	printf("ft version \n");
	printf("%d\n", ft_isalnum('c'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('\n'));
	printf("libc version \n");
	printf("%d\n", isalnum('c'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", isalnum('\n'));
}
*/