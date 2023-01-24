/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:40 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:16:42 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	lst_size(t_var *lst)
{
	int	count;

	count = 0;
	while (lst != 0)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	lst_size_token(t_token *lst)
{
	int	count;

	count = 0;
	while (lst != 0)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
