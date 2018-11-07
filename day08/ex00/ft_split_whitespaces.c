/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 04:35:30 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/18 04:35:32 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = (*str != ' ' && *str != '\t' && *str != '\n' && *str ? 1 : 0);
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			&& (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n'
			&& str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

void	read_words(char *str, char **words)
{
	int i;
	int j;
	int k;
	int start;

	i = 0;
	j = 0;
	start = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] == '\0')
			break ;
		start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
		words[j] = (char*)malloc(sizeof(char) * (i - start) + 1);
		i = i - (i - start);
		k = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			words[j][k++] = str[i++];
		words[j++][k] = 0;
	}
	words[j++] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		words_count;
	char	**words;

	if (!str)
		return (NULL);
	words_count = count_words(str);
	words = (char**)malloc(sizeof(char*) * words_count + 1);
	read_words(str, words);
	return (words);
}
