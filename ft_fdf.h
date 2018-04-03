/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <dchiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:47:17 by dchiche           #+#    #+#             */
/*   Updated: 2018/02/19 18:16:00 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H
# include "minilibx_macos/mlx.h"
# include "libft/libft.h"
# include <math.h>
# include <time.h>
# include <stdlib.h>

typedef struct	s_parsing
{
	int			n;
	int			x;
	int			y;
	int			fd;
	int			tmp;
	char		*line;
	int			i;
	int			m;
}				t_parsing;

typedef struct	s_color
{
	int			color;
	int			color1;
	int			color2;
	int			middle;
	int			dif[2];
}				t_color;

typedef struct	s_map
{
	int			**map_tab;
	int			width;
	int			height;
	int			x_max;
	int			y_max;
	int			x;
	int			y;
	int			x2;
	int			y2;
	int			x0;
	int			y0;
	int			omega;
	int			alpha;
	int			zoom;
	int			bpp;
	int			endian;
	int			s_l;
	t_color		col;
	int			z1;
	int			z2;
	char		*img_chars;
	void		*mlx;
	void		*win;
	void		*img;
}				t_map;

int				ft_fdf(t_map map);
t_map			ft_parser(char *path, int *x, int *y);
int				ft_natoi(char *str);
int				ft_draw(t_map map);
int				ft_kill_parse(void);
int				*ft_flat_coord(int x, int y, int z, t_map map);
int				ft_put_point(t_map map, int y, int color);
t_map			ft_put_in_place(double factor, t_map map, int x, int add);
t_map			ft_wich(t_map map, int cal);
#endif
