/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:08:49 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/02/25 16:22:50 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "pipex_types.h"
#include "utils.h"
#include "nlibft.h"

char	*varval(char *envs[], char *var_name)
{
	int		i;
	char	**splits;

	i = 0;
	while (envs[i])
	{
		splits = ft_split(envs[i], '=');
		if (ft_strcmp(splits[0], var_name) == 0)
		{
			free_2d_array((void **)splits);
			return (envs[i]);
		}
		free_2d_array((void **)splits);
		i++;
	}
	return (NULL);
}

char	*resolve_path(char *path, char *bin)
{
	int		i;
	char	**directorys;
	char	*file_path;
	char	*bin_prefixed;

	i = 0;
	if (access(bin, X_OK) == 0)
		return (ft_strdup(bin));
	directorys = ft_split(path, ':');
	bin_prefixed = ft_strjoin("/", bin);
	while (directorys[i])
	{
		file_path = ft_strjoin(directorys[i], bin_prefixed);
		if (access(file_path, X_OK) == 0)
		{
			free_2d_array((void **)directorys);
			free(bin_prefixed);
			return (file_path);
		}
		free(file_path);
		i++;
	}
	free(bin_prefixed);
	free_2d_array((void **)directorys);
	return (NULL);
}
