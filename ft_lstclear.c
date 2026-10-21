/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:30:51 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/20 16:54:30 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;
    if(lst && del)
    {
        current = *lst;
        while(current)
        {
            next = current->next;
            del(current->content);
            free(current);
            current = next;  
        }
        *lst = NULL ;
    }
}