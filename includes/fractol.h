/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 13:51:18 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/17 11:07:42 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H


# include "../libft/includes/libft.h"
# include "../minilibx/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

# include <unistd.h>

# define WIN_X 800
# define WIN_Y 600

# define KEYPRESS 2
# define KEYRELEASE 3
# define KEYPRESSMASK (1L<<0)
# define KEYRELEASEMASK (1L<<1)

# define POINTERMOTIONMASK (1L<<6)
# define MOTIONOTIFY 6

typedef struct				s_env
{
	void		*im;
	void		*imc;
	int			bpp;
	int			imlen;
	int			endi;

	void		*mlx;
	void		*win;
	char		*argv;

	int			i;
	int			x;
	int			y;

	float		x1;
	float		x2;
	float		y1;
	float		y2;

	float		tmpx;
	float		tmpy;
	float		tmpx2;
	float		tmpy2;

	float		c_r;
	float		c_i;
	float		z_r;
	float		z_i;
	float		tmp;

	float		zoom;
	float		zoom_y;
	float		zoom_x;

	int			iter_max;
	int			im_x;
	int			im_y;

	int			itm;
	int			res;
	int			bj;

}							t_env;

void				ft_put_pixel(t_env *e, int x, int y, int color);
void				ft_settings(void);
//void				ft_error(void);

void				ft_ini(t_env *e);
void				ft_ini_val_mandel(t_env *e);
void				ft_ini_val_julia(t_env *e);
void				ft_ini_val_bship(t_env *e);

void				ft_print_fract(t_env *e);
void				ft_print_mandel(t_env *e);
void				ft_print_julia(t_env *e);
void				ft_print_bship(t_env *e);

int					ft_core(t_env *e);
int					ft_key_settings(int keycode, t_env *e);
int					ft_key_release(int keycode, t_env *e);
void				ft_key_action(t_env *e);

void				ft_init(t_env *e);
void				ft_init_mandel(t_env *e);

void				ft_fractol_print(t_env *e);
void				ft_mandelbrot(t_env *e);

#endif
