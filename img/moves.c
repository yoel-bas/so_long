#include "so_long.h"

void    left(way *main_game)
{
    main_game->x_p -= 1;
    if(main_game->map1[main_game->y_p][main_game->x_p] != '1')
    {
        if(main_game->map1[main_game->y_p][main_game->x_p] == 'E')
        {
        if((main_game->coins))    
            return;
        main_game->map[main_game->y_p][main_game->x_p + 1] = '0';
        mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, main_game->y_p * 50);
        exit(1);
        }
        if(main_game->map1[main_game->y_p][main_game->x_p] == '0' || main_game->map1[main_game->y_p][main_game->x_p] == 'C')
        {
            if(main_game->map1[main_game->y_p][main_game->x_p] == 'C')
                main_game->coins--;
            main_game->map1[main_game->y_p][main_game->x_p + 1] = '0';
            mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, (main_game->x_p + 1) * 50, main_game->y_p * 50);
            main_game->map1[main_game->y_p][main_game->x_p] = 'P';
             mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrpl, main_game->x_p * 50, main_game->y_p * 50);
        }
    }
    return;
}
void    up(way *main_game)
{
     main_game->y_p -= 1;
    if(main_game->map1[main_game->y_p][main_game->x_p] != '1')
    {
        if(main_game->map1[main_game->y_p][main_game->x_p] == 'E')
        {
        if((main_game->coins))    
            return;
        main_game->map1[main_game->y_p + 1][main_game->x_p] = '0';
        mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p + 1) * 50);
        exit(1);
        }
        if(main_game->map1[main_game->y_p][main_game->x_p] == '0' || main_game->map1[main_game->y_p][main_game->x_p] == 'C')
        {
            if(main_game->map1[main_game->y_p][main_game->x_p] == 'C')
                main_game->coins--;
            main_game->map1[main_game->y_p + 1][main_game->x_p] = '0';
            mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p + 1) * 50);
            main_game->map1[main_game->y_p][main_game->x_p] = 'P';
             mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrpl, main_game->x_p * 50, main_game->y_p * 50);
        }
    }
    return;
}
void    right(way *main_game)
{
        main_game->x_p += 1;
    if(main_game->map1[main_game->y_p][main_game->x_p] != '1')
    {
        if(main_game->map1[main_game->y_p][main_game->x_p] == 'E')
        {
        if((main_game->coins))    
            return;
        main_game->map1[main_game->y_p][main_game->x_p - 1] = '0';
        mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, main_game->y_p * 50);
        exit(1);
        }
        if(main_game->map1[main_game->y_p][main_game->x_p] == '0' || main_game->map1[main_game->y_p][main_game->x_p] == 'C')
        {
            if(main_game->map1[main_game->y_p][main_game->x_p] == 'C')
                main_game->coins--;
            main_game->map1[main_game->y_p][main_game->x_p + 1] = '0';
            mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, (main_game->x_p - 1) * 50, main_game->y_p * 50);
            main_game->map1[main_game->y_p][main_game->x_p] = 'P';
             mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrpl, main_game->x_p * 50, main_game->y_p * 50);
        }
    }
    return;
}
void    down(way *main_game)
{
     main_game->y_p += 1;
    if(main_game->map1[main_game->y_p][main_game->x_p] != '1')
    {
        if(main_game->map1[main_game->y_p][main_game->x_p] == 'E')
        {
        if((main_game->coins))    
            return;
        main_game->map1[main_game->y_p - 1][main_game->x_p] = '0';
        mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p - 1) * 50);
        exit(1);
        }
        if(main_game->map1[main_game->y_p][main_game->x_p] == '0' || main_game->map1[main_game->y_p][main_game->x_p] == 'C')
        {
            if(main_game->map1[main_game->y_p][main_game->x_p] == 'C')
                main_game->coins--;
            main_game->map1[main_game->y_p - 1][main_game->x_p] = '0';
            mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrg, main_game->x_p * 50, (main_game->y_p - 1) * 50);
            main_game->map1[main_game->y_p][main_game->x_p] = 'P';
             mlx_put_image_to_window(main_game->mlx, main_game->mlx_window, main_game->img_ptrpl, main_game->x_p * 50, main_game->y_p * 50);
        }
    }
    return;
}
int dd(int keycode,way *main_game)
{
    (void)main_game;

    if(keycode == 126 || keycode == 13)
              up(main_game);
    if(keycode == 123 || keycode == 0)
            left(main_game);
    if(keycode == 124 || keycode == 2)
            right(main_game);
    if(keycode == 125 || keycode == 1)
            down(main_game);
    return (0);
}