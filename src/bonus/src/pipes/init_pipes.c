/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:08:59 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/02/22 18:39:31 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipes.h"
#include "pipex.h"
#include "pipex_types.h"
#include "utils.h"

int	**init_pipes(int ac, char *av[], int mode)
{
	int	size;
	int	**pipes;

	size = bins_count(ac, mode);
	pipes = (int **)malloc(size * sizeof(int *));
	if (pipes == NULL)
		return (NULL);
	pipes[size - 1] = NULL;
	mk_pipes(ac, pipes, mode);
	if (mode == 0)
		pipes[0][0] = open(av[1], O_RDONLY);
	pipes[size - 2][1] = open(av[ac - 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (pipes[0][0] == -1 || pipes[size - 2][1] == -1 || check_pipes(pipes) ==
		-1)
	{
		if (pipes[0][0] == -1)
			perror(av[1]);
		if (pipes[size - 2][1] == -1)
			perror(av[ac - 1]);
		free_2d_array((void **)pipes);
		return (NULL);
	}
	return (pipes);
}
