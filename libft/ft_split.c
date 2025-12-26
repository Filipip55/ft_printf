/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:53:43 by icoman            #+#    #+#             */
/*   Updated: 2025/12/17 16:41:09 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
static void		free_all(char **arr, size_t i);
static char		*fill_word(const char *s, size_t start, size_t end);
static void		init_vars(size_t *i, size_t *j, int *start);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	int		start;

	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == NULL || s == NULL)
		return (NULL);
	init_vars(&i, &j, &start);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j++] = fill_word(s, start, i);
			if (res[j - 1] == NULL)
				return (free_all(res, j - 1), NULL);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}

static void	init_vars(size_t *i, size_t *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

static char	*fill_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * ((end - start) + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

//per liberare tutto in caso di errore
static void	free_all(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	new_word;
	size_t	count;

	count = 0;
	i = 0;
	new_word = 0;
	while (s[i])
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			count++;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (count);
}
/*
int	main()
{
	char	*str = "  MANKIND IS DEAD BLOOD IS FUEL HELL IS FULL ";
	char	c = ' ';
	char	**result;
	int		i;
	
	result = ft_split(str, c);
	if (!result)
	return (1);
	
	i = 0;
	while (result[i])
	{
		printf("Parola [%d]: |%s|\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/