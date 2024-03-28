/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:07:16 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/18 07:07:17 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nlibft.h"

void	ft_printerr(char *cmd, char *msg)
{
	if (cmd)
		write(2, cmd, ft_strlen(cmd));
	if (msg)
		write(2, msg, ft_strlen(msg));
}
