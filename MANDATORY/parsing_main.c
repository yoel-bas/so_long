/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:46:12 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/03 02:44:41 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main_game_initialize(int fd, t_way *main_game, char *str)
{
	char	*line;

	line = get_next_line(fd);
	if (!line || !str)
		return (0);
	while (line)
	{
		str = ft_strjoin(str, line);
		free(line);
		line = get_next_line(fd);
	}
	if (check_empty_line(str))
	{
		ft_wrong();
		exit(0);
	}
	main_game->map = ft_split(str, '\n');
	main_game->map2 = ft_split(str, '\n');
	main_game->map1 = ft_split(str, '\n');
	free(str);
	main_game->coins = count_coins(main_game->map);
	get_player_xy(main_game, 'P');
	main_game->moves = 1;
	return (0);
}

void	free_list(char **s)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

void	free_maps(t_way *main_game)
{
	free_list(main_game->map1);
	free_list(main_game->map2);
	free_list(main_game->map);
}

void	parsing(int fd, t_way *main_game)
{
	char	*str;
	int		i;
	int		j;

	str = ft_strdup("");
	i = 0;
	main_game_initialize(fd, main_game, str);
	valid_map(main_game->map);
	check(main_game);
	while (main_game->map[i])
	{
		j = 0;
		while (main_game->map[i][j])
			j++;
		i++;
	}
	graph(main_game, i, j);
	free_maps(main_game);
}
