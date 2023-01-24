/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:17:11 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:13 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	operators(t_token *tokens)
{
	while (tokens != 0)
	{
		if (tokens->type == 'o')
		{
			if (ft_strncmp(tokens->value, ">", 2) == 0 || \
					ft_strncmp(tokens->value, ">>", 3) == 0 || \
					ft_strncmp(tokens->value, "<", 2) == 0 || \
					ft_strncmp(tokens->value, "<<", 3) == 0)
				tokens->type = 'r';
			else if (ft_strncmp(tokens->value, "|", 2) == 0)
				tokens->type = 'c';
			else
			{
				ft_putstr_fd("Minishell: Syntax error: unexpected token '", 2);
				ft_putstr_fd(tokens->value, 2);
				ft_putstr_fd("'\n", 2);
				return (-1);
			}
		}
		tokens = tokens->next;
	}
	return (0);
}
