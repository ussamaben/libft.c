/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:04:01 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/17 13:06:18 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t lens1;
    size_t lens2;
    size_t tot;
    if(!s1 || !s2)
        return(NULL);
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    tot = lens1 + lens2;
    str = malloc((tot + 1) * sizeof(char));
    if(!str)
        return(NULL);
    ft_strlcpy(str,s1,lens1);
    ft_strlcat(str,s2,lens2);
    return(str);
    
}