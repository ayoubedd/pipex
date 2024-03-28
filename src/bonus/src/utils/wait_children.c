/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_children.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:16:39 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/15 16:16:50 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_types.h"

void	wait_children(void)
{
	while (wait(NULL) != -1)
		;
}
