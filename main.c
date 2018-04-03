/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <dchiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:48:59 by dchiche           #+#    #+#             */
/*   Updated: 2018/02/19 18:16:40 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

static void	ft_parsing_cpy(t_map *dst, t_map src)
{
	dst->map_tab = src.map_tab;
	dst->col.middle = ((src.col.dif[1]) - (src.col.dif[0])) / 2;
}

static void	ft_kill(void)
{
	ft_putendl_fd("usage: >./fdf map_file.fdf [x_size] [y_size]", 2);
	exit(EXIT_FAILURE);
}

int			main(int argc, char **argv)
{
	t_map	map;

	srand(time(NULL));
	ft_parsing_cpy(&map, ft_parser(argv[1], &(map.x_max), &(map.y_max)));
	map.width = 1920;
	map.height = 1080;
	if (argc < 2 || argc == 3)
		ft_kill();
	else if (argc > 2)
	{
		map.width = ft_atoi(argv[2]);
		map.height = ft_atoi(argv[3]);
	}
	map.mlx = mlx_init();
	map.win = mlx_new_window(map.mlx, map.width, map.height, \
			"You're the best!");
	ft_fdf(map);
	mlx_loop(map.mlx);
	return (0);
}
