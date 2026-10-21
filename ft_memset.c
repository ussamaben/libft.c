/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:48:55 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 20:54:10 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;
    ptr = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        ptr[i] = (unsigned char)x ;
        i++;
    }
    return (s);
}

#include <stdio.h>

void printarray(int *arr,int size)
{
    int i = 0;
    while (i<size){
        
        printf("%d ," , arr[i]);
        i++;
    }
    
}



int main()
{
    int x = 353;
    //int ptr[5] = {1,5,8,9,2};
   // ft_memset(&ptr, 5, 3);
    ft_memset(&x, 3, 1);
    printf("%d",x);
    //printarray(ptr ,5);
    return 0;
}