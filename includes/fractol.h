/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <pkerckho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 13:22:25 by pkerckho          #+#    #+#             */
/*   Updated: 2016/03/22 17:20:32 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define WIN_X 1200
# define WIN_Y 600

# define FRAC_X 800
# define UP_ARROW 126
# define DOWN_ARROW 125
# define RIGHT_ARROW 124
# define LEFT_ARROW 123
# define MINUS1 27
# define PLUS1 24
# define MINUS2 78
# define PLUS2 69
# define ESC_KEY 53
# define PAGE_UP 116
# define PAGE_DOWN 121
# define HOME 115
# define END 119
# define ENTER 76
# define RETURN 36
# define ONE1 18
# define ONE2 83
# define TWO1 19
# define TWO2 84
# define THREE1 20
# define THREE2 85
# define FOUR1 21
# define FOUR2 86
# define HOLD 4

# define HELLO "Fractol by pkerckho"
# define START "Press any key to start"
# define L_CONTROLS "               SETTINGS"
# define L_PLUS "  more iterations   ||       +"
# define L_MINUS "  less iterations   ||       -"
# define L_PAGE_UP "  zoom in           ||  left click or"
# define L_SCROLL_D "                    ||  scroll down"
# define L_PAGE_DOWN "  zoom out          ||  right click or"
# define L_SCROLL_U "                    ||  scroll up"
# define L_MANDEL "  Mandelbrot        ||       1"
# define L_JULIA "  Julia             ||       2"
# define L_MANDALT "  Mandelbralt       ||       3"
# define L_BURN "  burning ship      ||       4"
# define L_TRANS "  transform julia   ||  move mouse"
# define L_OVER "                    ||  over fractal"
# define L_HOLD "  prevent transform ||  hold H"
# define L_RESET "  reset             ||  return / enter"
# define L_ESC "  exit              ||  esc"
# define KEYPRESS 2
# define KEYPRESSMASK (1L<<0)
# define KEYRELEASE 3
# define KEYRELEASEMASK (1L<<1)
# define MOTIONNOTIFY 6
# define POINTERMOTIONMASK (1L<<6)

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <math.h>

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
	void			*im;
	char			*imc;
	int				imlen;
	int				bpp;
	int				endi;
	char			*argv;

	int				i;
	int				x;
	int				y;
	float			x1;
	float			y1;
	float			x2;
	float			y2;

	int				max;
	int				im_x;
	int				im_y;
	float			z_r;
	float			z_i;
	float			c_r;
	float			c_i;

	float			tmp;
	float			zoom;
	float			zoom_x;
	float			zoom_y;
	int				itm;
	int				res;
	int				bj;

	float			tmpx;
	float			tmpy;
	float			tmpx2;
	float			tmpy2;
	int				check;
}					t_mlx;

void				ft_put_pixel(t_mlx *m, int x, int y, int color);
int					ft_keycore(t_mlx *m);
int					ft_key_binding(int keycode, t_mlx *m);
int					ft_key_release(int keycode, t_mlx *m);
void				ft_key_action(t_mlx *m);
int					ft_mouse_hook(int keycode, int x, int y, t_mlx *m);
void				ft_putset(t_mlx *mlx);
void				ft_fractol_init(t_mlx *m);
void				ft_print_fractol(t_mlx *m);
void				ft_init_mandel(t_mlx *m);
void				ft_mandelbrot(t_mlx *m);
void				ft_init_julia(t_mlx *m);
void				ft_julia(t_mlx *m);
int					ft_julia_hook(int x, int y, t_mlx *m);
void				ft_init_mandelbralt(t_mlx *m);
void				ft_mandelbralt(t_mlx *m);
void				ft_julia_set(t_mlx *m);
void				ft_settings(t_mlx *m);
void				ft_init_burnship(t_mlx *m);
void				ft_burnship(t_mlx *m);
void				ft_exit(const char *message);

#endif
