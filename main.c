/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 14:40:56 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/15 17:10:44 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init(t_env *e)
{
	if (!(ft_strcmp(e->argv, "mandelbrot")))
		ft_init_mandel(e);
	//if (!(ft_strcmp(e->argv, "julia")))
		//ft_init_julia(e);
	//if (!(ft_strcmp(e->argv, "burning_ship")))
		//ft_ini_val_ship(e);//
}

void	ft_fractol_print(t_env *e)
{
	if (!(ft_strcmp(e->argv, "mandelbrot")))
		ft_init_mandel(e);
	//if (!(ft_strcmp(e->argv, "julia")))
	//	ft_init_julia(e);
	//if (!(ft_strcmp(e->argv, "burning_ship")))
}

int			main(int argc, char **argv)
{
	t_env e;

	e.argv = argv[1];
	if (argc == 2 && ((!(ft_strcmp(e.argv, "mandelbrot")))
				|| (!(ft_strcmp(e.argv, "julia")))
				|| (!(ft_strcmp(e.argv, "burning_ship")))))
	{

				ft_settings();
				e.mlx = mlx_init();
				e.win = mlx_new_window(e.mlx, WIN_X, WIN_Y, "Fractol");
				e.im = mlx_new_image(e.mlx, WIN_X, WIN_Y);
				e.imc = mlx_get_data_addr(e.im, &e.bpp, &e.imlen, &e.endi);
				ft_init(&e);
				ft_fractol_print(&e);
				//mlx_hook(e.win, MOTIONNNOTIFY, POINTERMOTIONMASK, ft_julia_hook, &e);
				//mlx_hook(e.win, KEYPRESS, KEYPRESSMASK, ft_key_settings, &e);
				//mlx_hook(e.win, ft_mouse_hook, &e);
				//mlx_loop_hook(e.win, ft_mouse_hook, &e);
				//mlx_loop_hook(e.mlx, ft_core, &e);
				//mlx_loop(e.mlx);
	}
	return (0);
}
