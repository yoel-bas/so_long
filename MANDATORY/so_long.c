/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:45:44 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/03 11:08:20 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void ayman()
{
	system("leaks so_long");
}
int	main(int ac, char **av)
{
	int		fd;
	t_way	main_game;
	
	atexit(ayman);
	if (ac == 2)
	{
		if (ft_check_name(av[1]))
			write(1, "Error\n", 6);
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			exit(1);
		parsing(fd, &main_game);
		
	}
}
