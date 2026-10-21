/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:52:44 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/19 14:00:29 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst == NULL)
    {    new -> next = NULL;
        *lst = new;
    }
    while(*lst->next !=NULL)
    {
        *lst = *lst->next;
    }
    new->next = NULL;
    *lst->next = new;
}