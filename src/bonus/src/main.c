/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:08:39 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/12 16:35:54 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heredoc.h"
#include "parsing.h"
#include "pipes.h"
#include "pipex.h"
#include "pipex_types.h"
#include "utils.h"
#include "nlibft.h"

static void	init(t_params *params)
{
	params->pipes = init_pipes(params->ac,
			params->av, params->mode);
	params->flags = init_flags(params->ac,
			params->av, params->mode);
	if (!params->flags)
	{
		cleanup(params->flags, NULL, params->pipes);
		exit(1);
	}
	params->bins = init_bins(params->ac, params->flags,
			params->env, params->mode);
	if (!params->bins || !params->pipes)
	{
		cleanup(params->flags, NULL, params->pipes);
		exit(1);
	}
}

int	main(int ac, char *av[], char *env[])
{
	t_params	params;

	params.ac = ac;
	params.av = av;
	params.env = env;
	if (ac < 4)
	{
		usage(av[0]);
		return (1);
	}
	if (ft_strcmp("here_doc", av[1]) == 0)
		params.mode = 1;
	else
		params.mode = 0;
	init(&params);
	if (params.mode == 1)
		heredoc(av[2], params.pipes[0]);
	core(params);
	wait_children();
	cleanup(params.flags, params.bins, params.pipes);
	return (0);
}
