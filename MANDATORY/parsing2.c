/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:45:54 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/02 09:27:25 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_player_xy(t_way *main_game, char c)
{
	int	i;
	int	j;

	i = 0;
	while (main_game->map[i])
	{
		j = 0;
		while (main_game->map[i][j])
		{
			if (main_game->map[i][j] == c)
			{
				main_game->x_p = j;
				main_game->x_p1 = j;
				main_game->y_p = i;
				main_game->y_p1 = i;
				break ;
			}
			j++;
		}
		i++;
	}
}

int	count_coins(char **map)
{
	int	coins;
	int	i;
	int	j;

	coins = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				coins++;
			j++;
		}
		i++;
	}
	return (coins);
}

int	check_empty_line(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
			|| str[0] == '\n')
			return (1);
		i++;
	}
	return (0);
}
