/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:54:30 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/16 20:10:27 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *str, const char *to_find, size_t n)
{
    size_t i;
    size_t j;
    i = 0;
    if (to_find == '\0')
        return(str);
    while(str[i] && i < n)
    {
        j = 0;
        while(str[j + i] == to_find[j] && to_find[j])
            j++;
        if (to_find[j] == '\0')
            return((char *)&str[i]);
        i++;
    }
    return(NULL);
}