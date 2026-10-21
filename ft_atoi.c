/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:11:14 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:06:10 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *s)
{
    int sign;
    size_t i;
    int nb;
    tot = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);

}
