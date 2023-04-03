/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 04:06:10 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/02 09:28:10 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>

typedef struct element
{
	int		coins;
	int		x_p;
	int		y_p;
	int		x_p1;
	int		y_p1;
	char	**map;
	char	**map1;
	char	**map2;
	int		moves;
	void	*mlx;
	void	*mlx_window;
	void	*img_ptr;
	void	*img_ptrp;
	void	*img_ptrwin;
	void	*img_ptrw;
	void	*img_ptrc;
	void	*img_ptre;
	void	*img_ptre2;
	void	*img_ptrg;
	void	*img_ptrpl;
	int		back;
}			t_way;

char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlen(const char *str);
char		*get_next_line(int fd);
int			ft_check_name(char *str);
int			ft_strcmp(char *s1, char *s2);
char		ft_wrong(void);
void		*ft_calloc(size_t nitems, size_t size);
char		*ft_strdup(const char *s);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *str, int c);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *str, int c, int n);
char		**ft_split(char *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			dimension(char **map);
void		check_walls(char **map);
int			check_player(char **map);
int			check_coin(char **map);
int			check_exit(char **map);
int			check_way(char **map);
int			check_map_object(char **map);
void		check_square(char **map);
int			check_empty_line(char *str);
void		valid_map(char **map);
void		ft_swap(t_way *main_game, char b);
void		parsing(int fd, t_way *main_game);
void		graph(t_way *main_game, int y_p, int x_p);
void		get_player_xy(t_way *main_game, char c);
int			get_player_y(char **map, char c);
int			path_palyer(t_way *main_game, int y_p, int x_p);
int			count_coins(char **map);
void		path_coins(char **map, int y_p, int x_p);
int			dd(int keycode, t_way *main_game);
void		draw_player(t_way *main_game, int x_p, int y_p);
void		check_path(t_way *main_game);
void		check(t_way *main_game);
void		free_list(char **s);
void		draw_ground(t_way *main_game, int x_p, int y_p);
void		draw_player(t_way *main_game, int x_p, int y_p);
void		draw_walls(t_way *main_game, int x_p, int y_p);
void		draw_coins(t_way *main_game, int x_p, int y_p);
void		draw_exit(t_way *main_game, int x_p, int y_p);
#endif