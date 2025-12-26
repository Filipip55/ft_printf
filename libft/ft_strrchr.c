/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:44:47 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:34:10 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
int main()
{
	char *s = ft_strrchr("se giri l'angolo rimettilo a posto", 's');
	printf("ft version: %s\n", s);
	s = ft_strrchr("se giri l'angolo rimettilo a posto", '\0');
	printf("ft version: %s\n", s);
	s = strrchr("se giri l'angolo rimettilo a posto", 's');
	printf("libc version: %s\n", s);
	s = strrchr("se giri l'angolo rimettilo a posto", '\0');
	printf("libc version: %s\n", s);
	return 0;
}
*/