/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:10:00 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/16 13:22:59 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_start_mandel(t_env *e)
{
	e->x1 = -2.1;
	e->x2 = 0.6;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 150;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 90;
}

void	ft_start_julia(t_env *e)
{
	e->x1 = -1.6;
	e->x2 = 1;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 150;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 90;
	e->c_r = 0.285;
	e->c_i = 0.01;
}

void	ft_start_ship(t_env *e)
{
	e->x1 = -2.1;
	e->x2 = 0.6;
	e->y1 = -1.5;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 300;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 90;
}
