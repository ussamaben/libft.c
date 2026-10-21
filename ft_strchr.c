/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:03:42 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 20:59:19 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    size_t i;
    i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return((unsigned char *)&str[i]);
        i++;
    }
    if(str[i] == c)
        return((unsigned char *)&str[i]);
    return(NULL);
}