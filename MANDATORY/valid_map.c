/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:45:34 by yoel-bas          #+#    #+#             */
/*   Updated: 2023/04/01 03:50:41 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_map(char **map)
{
	check_square(map);
	if (dimension(map) || check_player(map) || check_coin(map)
		|| check_exit(map) || check_map_object(map))
	{
		ft_wrong();
		exit(1);
	}
}
