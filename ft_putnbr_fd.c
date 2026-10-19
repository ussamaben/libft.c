/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 23:05:18 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/18 23:16:35 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        write(fd,"-2147483648",11);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd("-");
        n = -n;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10);
    ft_putchar_fd((n % 10) + '0');
}