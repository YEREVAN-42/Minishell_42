/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote_removal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:17:56 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:59 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	quote_removal(t_token *tokens)
{
	int		i;
	char	*new_value;
	char	*new_quote;

	i = -1;
	while (tokens->value[++i] != '\0')
	{
		if ((tokens->value[i] == '\'' || tokens->value[i] == '\"') && \
				tokens->quote[i] == '1')
		{
			tokens->value[i] = '\0';
			new_value = ft_strjoin(tokens->value, tokens->value + i + 1);
			free(tokens->value);
			tokens->value = new_value;
			tokens->quote[i] = '\0';
			new_quote = ft_strjoin(tokens->quote, tokens->quote + i + 1);
			free(tokens->quote);
			tokens->quote = new_quote;
			--i;
			if (tokens->type == 'h')
				tokens->type = 'H';
		}
	}
}
