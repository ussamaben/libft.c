/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 02:28:58 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/17 11:57:24 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *str;
    size_t i;
    i = 0;

    if(!s)
        return(NULL);
    if(start > ft_strlen(s))
        return(ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    str = malloc((len + 1) * sizeof(char));
    if(!str)
        return(NULL);
    while(i < len && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
    
}