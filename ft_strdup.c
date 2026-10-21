/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 01:12:03 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:05:25 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strdup(const char *src)
{
    char *copy;
    size_t i;
    i = 0;
    copy = malloc((ft_strlen(src) + 1) * sizeof(char));
    if(!copy)
        return(NULL);
    while(src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}