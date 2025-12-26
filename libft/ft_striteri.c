/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:21:21 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 16:48:24 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test(unsigned int i, char *c)
{
	if (i == 2)
	*c = 'z';
    if (*c >= 'a' && *c <= 'z')
	*c -= 32;
}

int main()
{
	char s[233] = "Sono uscito dal tunnel del divertimento";
	ft_striteri(s, test);
	printf("%s\n", s);
	return (0);
}
*/