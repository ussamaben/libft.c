/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:52:25 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/16 18:03:26 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
    unsigned char *ptr1;
    ptr1 = (unsigned char *)s1;
    unsigned char *ptr2;
    ptr2 = (unsigned char *)s2;

	i = 0;
	while (i < n && ptr1[i] == ptr2[i] && ptr1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}