/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:44:33 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/14 14:38:28 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, void const *src, size_t n)
{
    unsigned char *ptrd;
    unsigned char *ptrs;
    ptrs = (unsigned char *)src;
    ptrd = (unsigned char *)dest;
    size_t i;
    i = 0;
    while (i < n)
    {
        ptrd[i] = ptrs[i];
        i++;
    }
    return(dest);
}

int main()
{
    char src[] = "coooco cava";
    char dest;
    ft_memcpy(&dest,&src, 5);
    printf("%s",&dest);
}