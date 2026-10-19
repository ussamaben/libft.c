/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenaaro <obenaaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:03:52 by obenaaro          #+#    #+#             */
/*   Updated: 2026/10/19 11:41:12 by obenaaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list *ft_lstnew(void *content)
{
    t_list *head = NULL;
    head =  malloc((sizeof(t_list)));
    if(!head)
        return(NULL);
    head->content = content;
    head->next =NULL;
    return(head);
}