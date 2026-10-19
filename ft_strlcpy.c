/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:11:59 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/14 18:38:02 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t lens;
    lens = ft_len(src);
    size_t i;
    i = 0;
    while ( src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(lens);
}