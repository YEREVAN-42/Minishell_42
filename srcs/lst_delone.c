/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:22 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:16:24 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	lst_delone(t_var *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->name);
		del(lst->value);
		free (lst);
	}
}

void	lst_delone_token(t_token *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->value);
		del(lst->quote);
		free (lst);
	}
}
