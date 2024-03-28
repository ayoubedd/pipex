/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:07 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:40:08 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

char	*varval(char *envs[], char *var_name);
char	*resolve_path(char *paths, char *bin);
char	***init_flags(int ac, char *av[], int mode);
char	**init_bins(int ac, char **flags[], char *envs[], int mode);
char	*varval(char *envs[], char *var_name);

#endif
