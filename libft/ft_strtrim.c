/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:33:05 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 21:33:44 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (check_set(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && check_set(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

//controlla se c è presente in set
static int	check_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", ""));
	return 0;
}
*/