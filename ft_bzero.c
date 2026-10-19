/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:32:16 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/13 19:34:16 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *s, size_t n)
{
    size_t i;
    unsigned char *ptr;
    ptr = 0;
    i = 0;
    while(i < n)
    {
        ptr[i] = (unsigned char)x ;
        i++;
    }
    return (s);
}
