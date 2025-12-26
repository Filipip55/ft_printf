/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:54:32 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:33:13 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int main()
{
	char *s = ft_strchr("se giri l'angolo rimettilo a posto", 'g');
	printf("ft version: %s\n", s);
	s = ft_strchr("se giri l'angolo rimettilo a posto", '\0');
	printf("ft version: %s\n", s);
	s = strchr("se giri l'angolo rimettilo a posto", 'g');
	printf("libc version: %s\n", s);
	s = strchr("se giri l'angolo rimettilo a posto", '\0');
	printf("libc version: %s\n", s);
	return 0;
}
*/