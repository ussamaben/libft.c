/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:39:47 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/14 18:55:42 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_len(dest);
	s_len = ft_len(src);
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
