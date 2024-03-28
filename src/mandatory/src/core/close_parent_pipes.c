/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_parent_pipes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:53 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/13 10:57:36 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"

int	close_parent_pipes(int i, int *pipes[])
{
	if (close(pipes[i + 1][1]) == -1 || close(pipes[i][0]) == -1)
	{
		perror("Error closing pipe");
		return (1);
	}
	return (0);
}
