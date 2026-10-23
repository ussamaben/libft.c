/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:48:14 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:08:02 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char sep)
{
	return (c == sep);
}

int	count_words(char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_separator(*str, sep))
			str++;
		if (*str && !is_separator(*str, sep))
		{
			count++;
			while (*str && !is_separator(*str, sep))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char sep)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (str[len] && !is_separator(str[len], sep))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void free_split(char **s,size_t i)
{
    
    while(i > 0)
    {
        i--;
        free(s[i]);
    }
    free(s);
}

char	**ft_split(char *str, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_separator(*str, c))
			str++;
		if (*str && !is_separator(*str, c))
		{
			result[i] = malloc_word(str, c);
			if(!result[i])
            {
                free_split(result,i);
                return(NULL);
            }
                i++;
			while (*str && !is_separator(*str, c))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}
