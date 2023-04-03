/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.backtracking.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:46:08 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/01 04:41:12 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	path_palyer(t_way *main_game, int y_p, int x_p)
{
	if (main_game->map2[y_p][x_p] == 'E')
		return (1);
	if (main_game->map2[y_p][x_p] == '1')
		return (0);
	main_game->map2[y_p][x_p] = '1';
	if (path_palyer(main_game, y_p + 1, x_p))
		return (1);
	if (path_palyer(main_game, y_p - 1, x_p))
		return (1);
	if (path_palyer(main_game, y_p, x_p + 1))
		return (1);
	if (path_palyer(main_game, y_p, x_p - 1))
		return (1);
	return (0);
}

void	path_coins(char **map, int y_p1, int x_p1)
{
	if (map[y_p1 + 1][x_p1] == '0' || map[y_p1 + 1][x_p1] == 'C')
		map[y_p1 + 1][x_p1] = 'P';
	if (map[y_p1 - 1][x_p1] == '0' || map[y_p1 - 1][x_p1] == 'C')
		map[y_p1 - 1][x_p1] = 'P';
	if (map[y_p1][x_p1 + 1] == '0' || map[y_p1][x_p1 + 1] == 'C')
		map[y_p1][x_p1 + 1] = 'P';
	if (map[y_p1][x_p1 - 1] == '0' || map[y_p1][x_p1 - 1] == 'C')
		map[y_p1][x_p1 - 1] = 'P';
}

int	check_coins(t_way *main_game)
{
	int	i;
	int	j;

	i = 0;
	while (main_game->map1[i])
	{
		j = 0;
		while (main_game->map1[i][j])
		{
			if (main_game->map1[i][j] == 'P')
				path_coins(main_game->map1, i, j);
			j++;
		}
		i++;
	}
	if (count_coins(main_game->map1))
		return (1);
	return (0);
}

void	check(t_way *main_game)
{
	if (!(path_palyer(main_game, main_game->y_p1, main_game->x_p1)))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	if ((check_coins(main_game)))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}
