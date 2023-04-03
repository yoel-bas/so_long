/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:46:17 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/03 11:12:31 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up(t_way *main_game)
{
	if (main_game->map[main_game->y_p - 1][main_game->x_p] == 'E'
		&& (main_game->coins))
		return ;
	if (main_game->map[main_game->y_p - 1][main_game->x_p] == 'E'
		&& main_game->coins == 0)
		return (free_list(main_game->map), exit(0));
	if (main_game->map[main_game->y_p - 1][main_game->x_p] != '1')
	{
		main_game->y_p -= 1;
		if (main_game->map[main_game->y_p][main_game->x_p] == '0'
			|| main_game->map[main_game->y_p][main_game->x_p] == 'C')
		{
			if (main_game->map[main_game->y_p][main_game->x_p] == 'C')
				main_game->coins--;
			main_game->map[main_game->y_p + 1][main_game->x_p] = '0';
			main_game->map[main_game->y_p][main_game->x_p] = 'P';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p
					+ 1) * 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, main_game->y_p
				* 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrp, main_game->x_p * 50, main_game->y_p
				* 50);
			printf("moves : %d\n", main_game->moves++);
		}
	}
}

void	down(t_way *main_game)
{
	if (main_game->map[main_game->y_p + 1][main_game->x_p] == 'E'
		&& (main_game->coins))
		return ;
	if (main_game->map[main_game->y_p + 1][main_game->x_p] == 'E'
		&& main_game->coins == 0)
		return (free_list(main_game->map), exit(0));
	if (main_game->map[main_game->y_p + 1][main_game->x_p] != '1')
	{
		main_game->y_p += 1;
		if (main_game->map[main_game->y_p][main_game->x_p] == '0'
			|| main_game->map[main_game->y_p][main_game->x_p] == 'C')
		{
			if (main_game->map[main_game->y_p][main_game->x_p] == 'C')
				main_game->coins--;
			main_game->map[main_game->y_p - 1][main_game->x_p] = '0';
			main_game->map[main_game->y_p][main_game->x_p] = 'P';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p
					- 1) * 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, main_game->y_p
				* 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrp, main_game->x_p * 50, main_game->y_p
				* 50);
			printf("moves : %d\n", main_game->moves++);
		}
	}
}

void	right(t_way *main_game)
{
	if (main_game->map[main_game->y_p][main_game->x_p + 1] == 'E'
		&& (main_game->coins))
		return ;
	if (main_game->map[main_game->y_p][main_game->x_p + 1] == 'E'
		&& main_game->coins == 0)
		return (free_list(main_game->map), exit(0));
	if (main_game->map[main_game->y_p][main_game->x_p + 1] != '1')
	{
		main_game->x_p += 1;
		if (main_game->map[main_game->y_p][main_game->x_p] == '0'
			|| main_game->map[main_game->y_p][main_game->x_p] == 'C')
		{
			if (main_game->map[main_game->y_p][main_game->x_p] == 'C')
				main_game->coins--;
			main_game->map[main_game->y_p][main_game->x_p - 1] = '0';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, (main_game->x_p - 1) * 50,
				main_game->y_p * 50);
			main_game->map[main_game->y_p][main_game->x_p] = 'P';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, main_game->y_p
				* 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrp, main_game->x_p * 50, main_game->y_p
				* 50);
			printf("moves : %d\n", main_game->moves++);
		}
	}
}

void	left(t_way *main_game)
{
	if (main_game->map[main_game->y_p][main_game->x_p - 1] == 'E'
		&& (main_game->coins))
		return ;
	if (main_game->map[main_game->y_p][main_game->x_p - 1] == 'E'
		&& main_game->coins == 0)
		return (free_list(main_game->map), exit(0));
	if (main_game->map[main_game->y_p][main_game->x_p - 1] != '1')
	{
		main_game->x_p -= 1;
		if ((main_game->map[main_game->y_p][main_game->x_p] == '0'
			|| main_game->map[main_game->y_p][main_game->x_p] == 'C'))
		{
			if (main_game->map[main_game->y_p][main_game->x_p] == 'C')
				main_game->coins--;
			main_game->map[main_game->y_p][main_game->x_p + 1] = '0';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, (main_game->x_p + 1) * 50,
				main_game->y_p * 50);
			main_game->map[main_game->y_p][main_game->x_p] = 'P';
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrg, main_game->x_p * 50, main_game->y_p
				* 50);
			mlx_put_image_to_window(main_game->mlx, main_game->mlx_window,
				main_game->img_ptrpl, main_game->x_p * 50, main_game->y_p
				* 50);
			printf("moves : %d\n", main_game->moves++);
		}
	}
}

int	dd(int keycode, t_way *main_game)
{
	(void)main_game;
	if (keycode == 53)
		return (free_list(main_game->map), exit(0), 0);
	if (keycode == 126 || keycode == 13)
		up(main_game);
	if (keycode == 123 || keycode == 0)
		left(main_game);
	if (keycode == 124 || keycode == 2)
		right(main_game);
	if (keycode == 125 || keycode == 1)
		down(main_game);
	return (0);
}
