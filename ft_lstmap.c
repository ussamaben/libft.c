/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:29:05 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/20 18:06:34 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_node;
    t_list *new_list;
    if(!lst || !f || !del)
        return(NULL);
    new_list = NULL;
    new_node = NULL;
    while(lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if(!new_node)
        {
            ft_lstclear(&new_node,del);
            return(NULL);
        }
        ft_lstadd_back(&new_list,new_node);
        lst = lst->next;
    }
}