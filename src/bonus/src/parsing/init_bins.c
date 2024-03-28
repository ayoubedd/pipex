/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:43:49 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/14 04:05:26 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "pipex_types.h"
#include "utils.h"

static int	resolve_bins(char **flags[], char **bins, char *path)
{
	int	i;
	int	error;

	i = 0;
	while (flags[i])
	{
		bins[i] = resolve_path(path, flags[i][0]);
		if (!bins[i])
		{
			if (flags[i][0][0] == '/')
				perror(flags[i][0]);
			else
				ft_printerr(flags[i][0], ": command not found\n");
			error = 1;
		}
		i++;
	}
	bins[i] = NULL;
	if (error == 1)
	{
		freen_2d_array((void **)bins, i);
		return (1);
	}
	return (0);
}

char	**init_bins(int ac, char **flags[], char *envs[], int mode)
{
	int		size;
	char	**bins;
	char	*path;

	path = varval(envs, "PATH");
	if (!path)
	{
		printf("\"PATH\" environment variable not defined.\n");
		return (NULL);
	}
	size = bins_count(ac, mode);
	bins = (char **)malloc(size * sizeof(char *));
	if (bins == NULL)
		return (NULL);
	if (resolve_bins(flags, bins, path))
		return (NULL);
	return (bins);
}
