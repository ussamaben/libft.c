/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:47:34 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:04:40 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t nb, size_t size)
{
    size_t i;
    char *ptr;
    size_t tot;
    tot = nb * size;
    ptr = malloc(tot);
    if(!ptr)
        return(NULL);
    while (i < tot)
    {
        ptr[i] = 0;
        i++;
    }
    return(ptr);
}