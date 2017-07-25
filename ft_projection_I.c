/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projection_I.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:10:46 by anroche           #+#    #+#             */
/*   Updated: 2017/07/19 19:14:20 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fdf.h"

void	ft_projection_isometrique(t_indication *id)
{
	float ct1;
	float ct2;

	ct1 = 0.8;
	ct2 = 0.8;
	id->x0 = id->spot_x + ct1 * id->x * id->space -ct2 * id->y * id->space;
	id->y0 = id->spot_y + -id->z + ct1/2 * id->x * id->space + ct2/2 * id->y * 30;
}

void    ft_projection_isometrique2(t_indication *id)
{
	float ct1;
	float ct2;

	ct1 = 0.8;
	ct2 = 0.8;
	id->x1 = id->spot_x + ct1 * id->x * id->space -ct2 * id->y * id->space;
	id->y1 = id->spot_y + -id->z + ct1/2 * id->x * id->space +  ct2/2 * id->y * 30;
}
