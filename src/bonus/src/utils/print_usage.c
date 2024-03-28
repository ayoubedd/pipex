/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:48:14 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/02 15:50:27 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"

void	usage(char *bin)
{
	printf("usage: %s\n", bin);
	printf("\t\tinfile\t\t\"cmd\" .. \"cmd\"\toutfile\n");
	printf("\t\there_doc del \t\"cmd\" .. \"cmd\"\toutfile\n");
	exit(1);
}
