/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:06:05 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:32:24 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *) s;
	i = 0;
	while (i < n)
		d[i++] = '\0';
	return ;
}
/*
int main(int argc, char const *argv[])
{
	char s1[] = "MEOW";
	char s2[] = "MEOW";
	ft_bzero(s1, 4);
	printf("ft version: %s\n", s1);
	ft_bzero(s2, 4);
	printf("libc version: %s\n", s2);
	return 0;
}
*/