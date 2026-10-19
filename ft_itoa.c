/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:24:04 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/18 19:45:50 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int len_nb(int nb)
{
    int len ;
    len = 0;
    if (nb <= 0)
        len++;
    while (nb)
    {
        len++;
        nb = nb / 10;
    }
        return(len);
}
char *ft_itoa(int n)
{
    int l;
    char *str;
    l = len_nb(n);
    str = malloc((sizeof (char)) * (len + 1));
    if(!str)
        return(NULL);
    str[l] = '\0';
    if (n == 0)
        str[0] = '0';
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n > 0)
    {
        l--;
        str[l] = (n % 10) +'0';
        n = n /10;
    }
    return(str);
}