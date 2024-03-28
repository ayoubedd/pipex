/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:48:06 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:48:07 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "pipex_types.h"

void	cleanup(char ***flags, char **bins, int **pipes)
{
	if (flags)
		free_3d_array((void ***)flags);
	if (bins)
		free_2d_array((void **)bins);
	if (pipes)
		free_2d_array((void **)pipes);
}
