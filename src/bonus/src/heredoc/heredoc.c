/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:08:53 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/15 06:29:05 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"
#include "utils.h"
#include "get_next_line.h"
#include "nlibft.h"

char	*heredoc(const char *del, int *pipe)
{
	int		i;
	char	*chunk;
	char	*cmp;

	i = 1;
	chunk = NULL;
	cmp = ft_strjoin(del, "\n");
	while (i)
	{
		write(STDOUT_FILENO, "heredoc> ", 9);
		chunk = get_next_line(STDIN_FILENO);
		if (ft_strcmp(chunk, cmp) != 0)
			write(pipe[1], chunk, ft_strlen(chunk));
		else
			i = 0;
		if (chunk)
			free(chunk);
	}
	free(cmp);
	close(pipe[1]);
	return (NULL);
}
