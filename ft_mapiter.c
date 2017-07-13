/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:50:21 by tle-meur          #+#    #+#             */
/*   Updated: 2015/11/23 14:56:04 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mapiter(t_map *map, void (*f)(t_map *))
{
	if (!f)
		return ;
	while (map)
	{
		(*f)(map);
		map = map->next;
	}
}