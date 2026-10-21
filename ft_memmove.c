/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:00:26 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 20:56:23 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptrd;
    unsigned char *ptrs;
    ptrs = (unsigned char *)src;
    ptrd = (unsigned char *)dest;
    size_t i;
    i = 0;
    if(src > dest)
    {
    while (i < n)
        {   
           ptrd[i] = ptrs[i];
           i++;
        }
    } 
    else
    {
        i = n;
        while (i > 0)
        {
             i--;
            ptrd[i] = ptrs[i];
           
        }
        
    }
    return(dest);
}
int main()
{
    char src[] = "ABCDEFG";
    ft_memove(src+2,src, 4);
    printf("%s",&src);
}