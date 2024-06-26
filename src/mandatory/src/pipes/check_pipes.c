/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pipes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:46:14 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:46:16 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"

int	check_pipes(int **pipes)
{
	int	i;

	i = 0;
	while (pipes[i])
	{
		if (pipes[i][0] == -1 || pipes[i][1] == -1)
			return (-1);
		i++;
	}
	return (0);
}
