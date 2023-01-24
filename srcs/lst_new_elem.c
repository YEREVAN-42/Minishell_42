/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:16:34 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/20 19:33:48 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_var	*lst_new_elem(char *name, char *value)
{
	t_var	*new_elem;

	new_elem = (t_var *)malloc(sizeof(t_var));
	if (!new_elem)
		return (0);
	new_elem->name = name;
	new_elem->value = value;
	new_elem->meaning = 'e';
	new_elem->next = 0;
	return (new_elem);
}

t_token	*lst_new_elem_token(char type, char *value)
{
	t_token	*new_elem;

	new_elem = (t_token *)malloc(sizeof(t_token));
	if (!new_elem)
		return (0);
	new_elem->type = type;
	new_elem->value = value;
	new_elem->quote = (char *)ft_calloc(sizeof(char), (ft_strlen(value) + 1));
	new_elem->quote[sizeof(char) * ft_strlen(value)] = '\0';
	new_elem->next = 0;
	return (new_elem);
}
