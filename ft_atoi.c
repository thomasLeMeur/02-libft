/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:43:34 by tle-meur          #+#    #+#             */
/*   Updated: 2016/02/09 19:28:29 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int	i;
	int	n;
	int	d;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
		|| s[i] == '\f' || s[i] == '\r'))
		i++;
	d = i;
	if (s[i] == '-' || s[i] == '+')
		i++;
	n = 0;
	while (s[i] >= '0' && s[i] <= '9')
		n = n * 10 + (s[i++] - '0');
	if (s[d] == '-')
		n = -n;
	return (n);
}