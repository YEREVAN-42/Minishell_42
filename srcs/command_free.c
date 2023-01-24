/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:14:58 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:15:00 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	command_free(t_command *command)
{
	int	i;

	i = -1;
	if (command != 0)
	{
		if (command->args != 0)
		{
			while (command->args[++i] != 0)
				free(command->args[i]);
			free(command->args);
		}
		if (command->path != 0)
			free(command->path);
		if (command->oper != 0)
			free(command->oper);
		if (command->oper_value != 0)
			free(command->oper_value);
		free(command);
	}
}
