/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:18:21 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/16 14:56:00 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int c)
{
    unsigned char *p;
    size_t i;
    i = 0;
    p = NULL;
    while(str[i])
    {
        if(str[i] == c)
            p = (unsigned char *)&str[i];
        i++;
    }
    if (str[i] == c)
        return((unsigned char *)&str[i]);
    return((char *)p);
}

