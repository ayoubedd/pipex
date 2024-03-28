/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:19 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:40:20 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "pipex_types.h"

int		bins_count(int ac, int mode);
void	free_2d_array(void **ptr);
void	freen_2d_array(void **ptr, int x);
void	free_3d_array(void ***ptr);
void	cleanup(char ***flags, char **bins, int **pipes);
void	usage(char *bin);
void	wait_children(void);
void	ft_printerr(char *cmd, char *msg);

#endif
