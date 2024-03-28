/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:41:00 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/13 10:57:40 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "pipex_types.h"
#include "utils.h"

static void	child_pipes_handler(t_params params, int i)
{
	if (glue_child_pipes(i, params.pipes))
	{
		cleanup(params.flags, params.bins, params.pipes);
		exit(13);
	}
	execve(params.bins[i], params.flags[i], params.env);
	perror("Error forking");
	cleanup(params.flags, params.bins, params.pipes);
	exit(13);
}

void	core(t_params params)
{
	int	pid;
	int	i;

	i = 0;
	pid = -1;
	while (params.bins[i])
	{
		pid = fork();
		if (pid == 0)
			child_pipes_handler(params, i);
		else if (pid == -1)
		{
			perror("Error forking");
			return ;
		}
		else
		{
			if (close_parent_pipes(i, params.pipes))
				return ;
			i++;
		}
	}
}
