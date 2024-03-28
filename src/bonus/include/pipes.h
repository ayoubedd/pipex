/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:10 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:40:13 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPES_H
# define PIPES_H

int	check_pipes(int **pipes);
int	mk_pipes(int ac, int *pipes[], int mode);
int	**init_pipes(int ac, char *av[], int mode);

#endif
