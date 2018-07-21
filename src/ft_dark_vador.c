/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_id.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:23:06 by anroche           #+#    #+#             */
/*   Updated: 2017/08/09 17:25:09 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include "../minilibx_macos/mlx.h"

t_indication	ft_dark_vador(t_indication id)
{
	void *img;

	img = mlx_new_image(id.mlx, 2560, 1440);
	mlx_put_image_to_window(id.mlx, id.win, img, 0, 0);
	return (id);
}
