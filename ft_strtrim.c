/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:00:59 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/19 11:37:59 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    size_t st;
    size_t fl;
    size_t i;
    char *cop;
    
    i = 0;
    if(!s1 || !set)
        return(NULL); 
    while (s1[i] && ft_strchr(set,s1[i]))
        i++;
    st = i;
    fl = ft_strlen(s1);
    while(s1[i] && ft_strchr(set,s1[fl - 1]))
        fl--;
    cop = malloc((fl - st + 1) * sizeof(char))
    if(!cop)
        return(NULL);
    while(fl > st)
    {
        cop[i] = s1[st];
        i++;
        st++;
    }
    cop[i] = '\0';
    return(cop);
}