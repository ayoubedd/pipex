/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freefree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:35:28 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/02/25 16:21:24 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"

void	free_2d_array(void **ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return ;
	while (ptr[i])
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
}

void	freen_2d_array(void **ptr, int x)
{
	int	i;

	i = 0;
	if (!ptr)
		return ;
	while (i < x)
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
}

void	free_3d_array(void ***ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return ;
	while (ptr[i])
	{
		free_2d_array(ptr[i]);
		i++;
	}
	free(ptr);
}

void	cleanup(char ***flags, char **bins, int **pipes)
{
	if (flags)
		free_3d_array((void ***)flags);
	if (bins)
		free_2d_array((void **)bins);
	if (pipes)
		free_2d_array((void **)pipes);
}
