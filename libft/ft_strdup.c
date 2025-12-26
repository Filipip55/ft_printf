/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:43:17 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 21:15:30 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*new_s;

	if (s == NULL)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	new_s = (char *)malloc(len + 1);
	if (new_s == NULL)
		return (NULL);
	new_s[len] = '\0';
	while (len--)
		new_s[len] = s[len];
	return (new_s);
}
/*
int main(void)
{
	char *s = "Leone il cane fifone mangia un melone";
	printf("ft version:   %s\n", ft_strdup(s));
	printf("libc version: %s\n", strdup(s));
	return 0;
}
*/