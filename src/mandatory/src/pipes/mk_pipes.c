/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_pipes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:46:18 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:46:20 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipes.h"
#include "pipex_types.h"
#include "utils.h"

static int	*mk_pipe(void)
{
	int	*fifo;

	fifo = (int *)malloc(sizeof(int) * 2);
	if (!fifo)
		return (NULL);
	if (pipe(fifo) == -1)
	{
		free(fifo);
		return (NULL);
	}
	return (fifo);
}

int	mk_pipes(int ac, int **pipes, int mode)
{
	int	i;
	int	size;

	if (mode == 1)
		i = 0;
	else
		i = 1;
	size = bins_count(ac, mode);
	if (mode == 0)
		pipes[0] = (int *)malloc(sizeof(int) * 2);
	pipes[size - 2] = (int *)malloc(sizeof(int) * 2);
	while (i < size - 2)
	{
		pipes[i] = mk_pipe();
		if (pipes[i] == NULL)
			return (1);
		i++;
	}
	return (0);
}
