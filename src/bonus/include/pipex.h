/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:09:39 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/13 10:51:34 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "pipex_types.h"

void	core(t_params params);
int		close_parent_pipex(int i, int *pipes[]);
int		glue_child_pipes(int i, int *pipes[]);

#endif // !PIPEX_H
