/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dups.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:15:04 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:15:06 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	dups_outs(t_command *tmp)
{
	if (tmp->std_out != 1)
	{
		tmp->std_out_dup1 = dup(1);
		dup2(tmp->std_out, 1);
		close(tmp->std_out);
		if (tmp->pipe_out != 0)
			close(tmp->pipe_out);
	}
	else if (tmp->pipe_out != 0)
	{
		tmp->std_out_dup1 = dup(1);
		dup2(tmp->pipe_out, 1);
		close(tmp->pipe_out);
	}
}

void	dups(t_command *tmp)
{
	if (tmp->std_in != 0)
	{
		tmp->std_in_dup1 = dup(0);
		dup2(tmp->std_in, 0);
		close(tmp->std_in);
		if (tmp->pipe_in != 0)
			close(tmp->pipe_in);
	}
	else if (tmp->pipe_in != 0)
	{
		tmp->std_in_dup1 = dup(0);
		dup2(tmp->pipe_in, 0);
		close(tmp->pipe_in);
	}
	dups_outs(tmp);
}
