/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 13:23:30 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/22 15:58:59 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			ft_put_pixel(t_mlx *mlx, int x, int y, int color)
{
	int			*tmp;

	if (y >= WIN_Y || x >= WIN_X || x < 0 || y < 0)
		return ;
	tmp = (int *)&mlx->imc[(y * mlx->imlen) + (x * (mlx->bpp / 8))];
	*tmp = color;
}
