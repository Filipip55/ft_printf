/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:21:19 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:32:34 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/*
int main()
{
	printf("ft version \n");
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('1'));
	printf("libc version \n");
	printf("%d\n", isalpha('c'));
	printf("%d\n", isalpha('1'));
}
*/