/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spoter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:40:04 by anroche           #+#    #+#             */
/*   Updated: 2017/07/22 23:09:39 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fdf.h"
#include "minilibx_macos/mlx.h"

t_indication	ft_spoter(t_indication id)
{
	if (id.len_tab > 100 || id.nb_line> 100)
		id.space = 1;
	id.spot_x = (2560 - (id.len_tab * id.space)) / 4;
	id.spot_y = (1440 - (id.nb_line * id.space)) / 4;
	
	return (id);
}

void			ft_move_spoter(int arrow, t_indication *id)
{
	if (arrow == 123)
		id->spot_x -= 20;
	if (arrow == 126)
		id->spot_y -= 20;
	ft_putnbr(id->spot_y);
	if (arrow == 124)
		id->spot_x += 20;
	if (arrow == 125)
		id->spot_y += 20;
	set_image(id);
}

void			ft_zoom(int keycode, t_indication *id)
{
	if (keycode == 24 && id->space > 2)
		id->space = id->space - 2;
	else if (keycode == 44)
		id->space = id->space + 2;
	*id = ft_dark_vador(*id);
	ft_spoter(*id);
	set_image(id);
}

void			ft_erection(int keycode, t_indication *id)
{
	t_list		*mapos;

	mapos = id->map;
	id->y = 0;
	while (id->y < id->nb_line)
	{
		id->x = 0;
		while (id->x < id->len_tab)
		{
			if (keycode == 49)
				mapos->content[id->x] = mapos->content[id->x] * 2;
			else if (keycode == 260)
				mapos->content[id->x] *= -1;
			else
				mapos->content[id->x] *= 0.8;
			id->x++;
		}
		id->y++;
		mapos = mapos->next;
	}
	id->y = 0;
	id->x = 0;
	set_image(id);
}

void			ft_change_projection(int keycode, t_indication *id)
{
	if (keycode == 35)
		id->c = 'P';
	else
		id->c = 'I';
	ft_select_projection(id->c, id);
	ft_select_projection2(id->c, id);
	set_image(id);
}
