/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:45:49 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/01 04:35:26 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

void	draw_map(t_way *main_game)
{
	int	i;
	int	j;

	i = 0;
	while (main_game->map[i])
	{
		j = 0;
		while (main_game->map[i][j])
		{
			draw_ground(main_game, j * 50, i * 50);
			if (main_game->map[i][j] == 'P')
				draw_player(main_game, j * 50, i * 50);
			if (main_game->map[i][j] == '1')
				draw_walls(main_game, j * 50, i * 50);
			if (main_game->map[i][j] == 'C')
				draw_coins(main_game, j * 50, i * 50);
			if (main_game->map[i][j] == 'E')
				draw_exit(main_game, j * 50, i * 50);
			j++;
		}
		i++;
	}
}

void	graph(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	if (x_p >= 50 || y_p >= 50)
		return ;
	main_game->mlx = mlx_init();
	main_game->mlx_window = mlx_new_window(main_game->mlx, y_p * 50, x_p * 50,
			"so_long");
	main_game->img_ptr = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/My project1679186501.xpm", &img_w, &img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptr, 0, 0);
	draw_map(main_game);
	mlx_hook(main_game->mlx_window, 2, 1L << 0, dd, main_game);
	mlx_loop(main_game->mlx);
}
