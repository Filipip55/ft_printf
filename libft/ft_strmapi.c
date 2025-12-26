/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:06:10 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 18:19:11 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char test(unsigned int i, char c)
{
	if (i == 2)
		c = 'z';
    if (c >= 'a' && c <= 'z')
		return (c - 32);
    return (c);
}

int main()
{
	char *s = "Sono uscito dal tunnel del divertimento";
	printf("%s\n", ft_strmapi(s, test));
	return (0);
}
*/