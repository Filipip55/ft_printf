/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:28:11 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:33:02 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		new_s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}

/*
int main()
{
	printf("%s\n", ft_strjoin("SONO TAGL", "IATO A META'"));
	return 0;
}
*/