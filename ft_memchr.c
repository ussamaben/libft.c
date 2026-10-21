/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:28:16 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:00:41 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_strchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    ptr = (unsigned char *)s;
    size_t i;
    i = 0;
    while(ptr[i] && i < n)
    {
        if (ptr[i] == c)
            return(&ptr[i]);
        i++;
    }
    if(str[i] == c)
        return(&str[i]);
    return(NULL);
}