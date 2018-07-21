/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 19:05:48 by anroche           #+#    #+#             */
/*   Updated: 2017/08/07 19:23:58 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../minilibx_macos/mlx.h"
#include "../libft/libft.h"
#include "../fdf.h"

int		ft_colorize(int z)
{
	int color;

	if (z < 10)
		color = 0x001100FE;
	if (z <= 0)
		color = 0x00518EEA;
	if (z > 0)
		color = 0x00008912;
	if (z > 10)
		color = 0x006E4D00;
	if (z > 20)
		color = 0x00827F79;
	if (z > 50)
		color = 0x00FFFFFF;
	return (color);
}

void	ft_line(t_indication id)
{
	id.dx = abs(id.x1 - id.x0);
	id.sx = id.x0 < id.x1 ? 1 : -1;
	id.dy = abs(id.y1 - id.y0);
	id.sy = id.y0 < id.y1 ? 1 : -1;
	id.err = (id.dx > id.dy ? id.dx : -id.dy) / 2;
	while (id.x0 != id.x1 || id.y0 != id.y1)
	{
		pixel_put(id.x0, id.y0, &id);
		if (id.x0 == id.x1 && id.y0 == id.y1)
			break ;
		id.e2 = id.err;
		if (id.e2 > -id.dx)
		{
			id.err -= id.dy;
			id.x0 += id.sx;
		}
		if (id.e2 < id.dy)
		{
			id.err += id.dx;
			id.y0 += id.sy;
		}
	}
}

void	ft_display_v(t_indication id)
{
	t_list *mapos;

	mapos = id.map;
	id.x = 0;
	while (id.x < id.len_tab)
	{
		id.y = 0;
		id.map = mapos;
		while (id.y < id.nb_line)
		{
			id.z = (id.map->content[id.x]);
			ft_select_projection(id.c, &id);
			id.map = id.map->next;
			id.y++;
			if (id.y < id.nb_line)
			{
				id.z = (id.map->content[id.x]);
				ft_select_projection2(id.c, &id);
				id.color = ft_colorize(id.z);
				ft_line(id);
			}
		}
		id.x++;
	}
}

void	ft_display_h(t_indication id)
{
	id.y = 0;
	while (id.y < id.nb_line)
	{
		id.x = 0;
		while (id.x < id.len_tab - 1)
		{
			id.z = (id.map->content[id.x]);
			ft_select_projection(id.c, &id);
			id.x++;
			id.z = (id.map->content[id.x]);
			ft_select_projection2(id.c, &id);
			id.color = ft_colorize(id.z);
			ft_line(id);
		}
		id.y++;
		id.map = id.map->next;
	}
}

void	ft_display(t_indication id)
{
	id.nb_line = ft_len_list(id.map);
	id.space = 15;
	id.mlx = mlx_init();
	id.c = 'P';
	id.win = mlx_new_window(id.mlx, 2560, 1440, "FDF");
	id = ft_spoter(id);
	set_image(&id);
	mlx_key_hook(id.win, ft_key_func, &id);
	mlx_loop(id.mlx);
}
