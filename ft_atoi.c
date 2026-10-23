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

#include <stdio.h>

int	ft_atoi(const char *s)
{
	int	i;
	int	isneg;
	int	rest;

	i = 0;
	isneg = 1;
	rest = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			isneg *= -1;
		}
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9'))
	{
		rest = rest * 10 + (s[i] - '0');
		i++;
	}
	return (rest * isneg);
}
