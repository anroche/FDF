/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projection_isometrique.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:12:54 by anroche           #+#    #+#             */
/*   Updated: 2017/08/09 17:14:35 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fdf.h"

void	ft_projection_isometrique(t_indication *id)
{
	float ct1;
	float ct2;

	ct1 = 0.8;
	ct2 = 0.8;
	id->x0 = id->spot_x + ct1 * id->x * id->space - ct2 * id->y * id->space;
	id->y0 = id->spot_y + -id->z + ct1 / 2 *
		id->x * id->space + ct2 / 2 * id->y * 10;
}

void	ft_projection_isometrique2(t_indication *id)
{
	float ct1;
	float ct2;

	ct1 = 0.8;
	ct2 = 0.8;
	id->x1 = id->spot_x + ct1 * id->x * id->space - ct2 * id->y * id->space;
	id->y1 = id->spot_y + -id->z + ct1 / 2 *
		id->x * id->space + ct2 / 2 * id->y * 10;
}
