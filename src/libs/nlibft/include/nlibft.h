/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nlibft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:20:42 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/12 08:20:43 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NLIBFT_H
# define NLIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	*ft_memset(void *b, int c, size_t len);
char	**ft_split(char const *s, char c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);

#endif
