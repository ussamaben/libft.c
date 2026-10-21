/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:42:12 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/20 23:11:31 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *new;
    if (!s || !f)
        return(NULL);
    new = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!new)
        return(NULL);
    
    
    i = 0;
    while(s[i])
    {
        new[i] = f(i,s[i]);
        i++;
    }    
    new[i] = '\0';
    return(new);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}                                                                                                                          