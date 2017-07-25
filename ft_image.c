/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:33:37 by anroche           #+#    #+#             */
/*   Updated: 2017/07/19 20:08:03 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"fdf.h"
#include "minilibx_macos/mlx.h"

void    pixel_put(int x, int y, t_indication *id)
{
	int index;
	int *ptr;

	if (x >= 0 && x < 2560 && y >= 0 && y < 1440)
	{
		index = y * id->s_l + x * id->bpp / 8;
		ptr = (int*)&id->str_img[index];
		*ptr = id->color;
	}
}

void    set_image(t_indication *id)
{
	id->img = mlx_new_image(id->mlx, 2560, 1440);
	id->str_img = mlx_get_data_addr(id->img, &(id->bpp),&(id->s_l), &(id->endian));
	ft_display_h(*id);
	ft_display_v(*id);
	mlx_clear_window(id->mlx, id->win);
	mlx_put_image_to_window(id->mlx, id->win, id->img, 0, 0);
	mlx_destroy_image(id->mlx, id->img);
}
