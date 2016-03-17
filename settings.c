/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:29:55 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/16 13:32:14 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_env *e, int x, int y, int color)
{
	int	*tmp;

	if (y >= WIN_Y || x >= WIN_X || x < 0 || y < 0)
		return ;
	tmp = (int *)&e->imc[(y * e->imlen) + (x * (e->bpp / 8))];
	*tmp = color;
}
