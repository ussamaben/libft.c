/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:48:14 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:08:02 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t is_sep(char c, char sep)
{
    return(sep == c);
}

size_t count_word( char const *str, char sep)
{
    size_t count ;
    count = 0;
    while(*str)
    {
        while(*str && is_sep(*str,sep))
            str++;
        if (*str && !is_sep(*str,sep))
            count++;
        while (*str && !is_sep(*str,sep))
            str++;
    }
    return(count);
}

char *malloc_w( char const *str, char sep)
{
    size_t len;
    size_t i;
    char *word;
    len = 0;
    i = 0;
    while(str[len] && !is_sep(str[len],sep))
        len++;
    word = malloc(sizeof(char) * (len + 1));
    if(!word)
        return(NULL);
    while(i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return(word);
}
void free_split(char **s,size_t i)
{
    
    while(i > 0)
    {
        i--;
        free(s[i]);
    }
    free(s);
}
char **ft_split(char *s,char c)
{
    char **result;
    size_t i;
    i = 0;
    if(!s)
        return(NULL);
    result = malloc(sizeof(char *) * (count_word(s,c) + 1));
    if(!result)
        return(NULL);
    while(*s)
    {
        while(*s && is_sep(*s,c))
            s++;
        if(*s)
        {
            result[i] = malloc_w(s,c);
            
            if(!result[i])
            {
                free_split(result,i);
                return(NULL);
            }
                i++;
            while(*s && !is_sep(*s,c))
            s++;
        }
        
    }
    result[i] = NULL;
    return(result);
}

int main(void)
{
    char s[]=" hello its my          borth";
    char **res;
    size_t i;
     i = 0;
    res = ft_split(s, ' ');
    if(!res)
        return(1);
    while(res[i]){
        printf("%s\n",res[i]);
        i++;
    }
   
    while (res[i])
    {
        free(res[i]);
        i++;
    }
    free(res);
    return(0);
}