/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:25:06 by anroche           #+#    #+#             */
/*   Updated: 2017/07/22 18:41:32 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <unistd.h>

typedef	struct		s_indication
{
	int				x;
	int				y;
	int				z;
	int				x0;
	int				x1;
	int				y0;
	int				y1;
	int				color;
	void			*mlx;
	void			*win;
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	int				err;
	int				e2;
	void			*img;
	char			*str_img;
	int				bpp;
	int				s_l;
	int				endian;
	int				spot_x;
	int				spot_y;
	unsigned int	space;
	int				len_tab;
	int				nb_line;
	char			c;
	t_list			*map;
}					t_indication;

void				set_image(t_indication *id);
void				pixel_put(int x, int y, t_indication *id);
void				ft_select_projection(char c, t_indication *id);
void				ft_select_projection2(char c, t_indication *id);
void				ft_projection_parallele(t_indication *id);
void				ft_projection_parallele2(t_indication *id);
void				ft_projection_isometrique(t_indication *id);
void				ft_projection_isometrique2(t_indication *id);
int					ft_key_func(int keycode, t_indication *id);
t_indication		ft_spoter(t_indication id);
void				ft_move_spoter(int arrow, t_indication *id);
void				ft_zoom(int keycode, t_indication *id);
void				ft_erection(int keycode, t_indication *id);
void				ft_change_projection(int keycode, t_indication *id);
void				ft_display_v(t_indication id);
void				ft_display_h(t_indication id);
t_indication		ft_dark_vador(t_indication id);
t_list				*ft_parcing(int fd, int *len_tab);
void				ft_error(int n);
void				ft_display(t_indication id);
#endif
