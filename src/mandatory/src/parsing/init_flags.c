/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:43:54 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/19 10:45:56 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"
#include "utils.h"
#include "nlibft.h"

static int	check_arguments(int ac, char *av[], int mode)
{
	int	i;

	if (mode == 0)
		i = 2;
	else
		i = 3;
	while (i < ac - 1)
	{
		if (ft_strlen(av[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

static int	_init_flags(char **flags[], char *av[], int ac, int mode)
{
	int	i;
	int	j;

	j = 0;
	if (mode == 0)
		i = 2;
	else
		i = 3;
	while (i < ac - 1)
	{
		flags[j] = ft_split(av[i], ' ');
		if (!flags[j])
		{
			free_3d_array((void ***)flags);
			return (1);
		}
		j++;
		i++;
	}
	flags[j] = NULL;
	return (0);
}

char	***init_flags(int ac, char **av, int mode)
{
	int		size;
	char	***flags;

	if (check_arguments(ac, av, mode))
	{
		ft_printerr(av[0], ": cannot pass empty string as command!\n");
		return (NULL);
	}
	size = bins_count(ac, mode);
	flags = (char ***)malloc(size * sizeof(char *));
	if (!flags)
		return (NULL);
	if (_init_flags(flags, av, ac, mode))
		return (NULL);
	return (flags);
}
