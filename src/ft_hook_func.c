/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:44:14 by anroche           #+#    #+#             */
/*   Updated: 2017/08/07 19:25:02 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fdf.h"
#include "../minilibx_macos/mlx.h"

int		ft_key_func(int keycode, t_indication *id)
{
	if (keycode == 78 || keycode == 69)
		ft_zoom(keycode, id);
	if (keycode == 123 || keycode == 124 || keycode == 125 || keycode == 126)
		ft_move_spoter(keycode, id);
	if (keycode == 49 || keycode == 259 || keycode == 260)
		ft_erection(keycode, id);
	if (keycode == 35 || keycode == 34)
		ft_change_projection(keycode, id);
	if (keycode == 53)
		exit(1);
	return (1);
}
