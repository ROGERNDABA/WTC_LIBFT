/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:42:52 by rmdaba            #+#    #+#             */
/*   Updated: 2018/05/22 13:46:31 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list		*new;

	if (!(new = malloc(1 * sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void*)ft_strdup((char*)content);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
