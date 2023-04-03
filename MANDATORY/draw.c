/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:46:48 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/03 02:40:16 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

void	draw_ground(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	main_game->img_ptrg = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/background.xpm",
			&img_w, &img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptrg, x_p, y_p);
}

void	draw_player(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	main_game->img_ptrpl = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/player_left.xpm",
			&img_w, &img_h);
	main_game->img_ptrp = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/player_right.xpm",
			&img_w, &img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptrp, x_p, y_p);
}

void	draw_walls(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	main_game->img_ptrw = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/wall501679190024.xpm", &img_w,
			&img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptrw, x_p, y_p);
}

void	draw_coins(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	main_game->img_ptrc = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/collect.xpm",
			&img_w, &img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptrc, x_p, y_p);
}

void	draw_exit(t_way *main_game, int x_p, int y_p)
{
	int	img_w;
	int	img_h;

	img_w = 0;
	img_h = 0;
	main_game->img_ptre = mlx_xpm_file_to_image(main_game->mlx,
			"/Users/yoel-bas/Desktop/so_long/img/door.xpm",
			&img_w, &img_h);
	mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
		main_game->img_ptre, x_p, y_p);
}
