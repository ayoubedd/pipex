/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:17 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/12 08:02:52 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_TYPES_H
# define PIPEX_TYPES_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_params
{
	int		ac;
	char	**av;
	int		mode;
	char	**env;
	char	***flags;
	char	**bins;
	int		**pipes;
}			t_params;

#endif
