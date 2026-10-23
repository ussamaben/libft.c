/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:28:16 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/21 21:00:41 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*res;
	unsigned char	cara;
	size_t			i;

	i = 0;
	res = (unsigned char *)s;
	cara = (unsigned char)c;
	while (i < n)
	{
		if (res[i] == cara)
			return ((void *)(res + i));
		i++;
	}
	return (NULL);
}
