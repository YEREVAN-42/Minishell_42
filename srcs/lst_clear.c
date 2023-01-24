/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:17 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:16:19 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	lst_clear(t_var **lst, void (*del)(void *))
{
	t_var	*tmp;

	if (lst != 0 && *lst != 0)
	{
		while (*lst != 0)
		{
			tmp = (*lst)->next;
			lst_delone(*lst, del);
			*lst = tmp;
		}
	}
}

void	lst_clear_token(t_token **lst, void (*del)(void *))
{
	t_token	*tmp;

	if (lst != 0 && *lst != 0)
	{
		while (*lst != 0)
		{
			tmp = (*lst)->next;
			lst_delone_token(*lst, del);
			*lst = tmp;
		}
	}
}
