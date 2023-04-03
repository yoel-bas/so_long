/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:46:00 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/02 09:27:45 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_square(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(map[i]);
	while (map[i])
		i++;
	if (i == j)
	{
		ft_wrong();
		exit(0);
	}
}

int	dimension(char **map)
{
	int	i;
	int	len1;
	int	len2;

	i = 0;
	len1 = ft_strlen(map[i]);
	while (map[++i])
	{
		len2 = ft_strlen(map[i]);
		if (len1 != len2)
		{
			return (1);
			break ;
		}
		i++;
	}
	return (0);
}

int	check_player(char **map)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	p = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				p++;
			j++;
		}
		i++;
	}
	if (p > 1 || p < 1)
		return (1);
	return (0);
}

int	check_coin(char **map)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				c++;
			j++;
		}
		i++;
	}
	if (c < 1)
		return (1);
	return (0);
}

int	check_exit(char **map)
{
	int	i;
	int	j;
	int	e;

	i = 0;
	e = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
				e++;
			j++;
		}
		i++;
	}
	if (e > 1 || e < 1)
		return (1);
	return (0);
}
