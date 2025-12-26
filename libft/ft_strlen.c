/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:42:23 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:33:10 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	const char *s = "I LOVE TATE MCRAE";
	printf("ft version \n");
	printf("%d\n", ft_strlen(s));
	printf("libc version \n");
	printf("%d\n", strlen(s));
}
*/