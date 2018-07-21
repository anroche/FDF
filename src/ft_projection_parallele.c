/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projection_P.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:02:11 by anroche           #+#    #+#             */
/*   Updated: 2017/08/09 17:17:59 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fdf.h"

void	ft_projection_parallele(t_indication *id)
{
	float ct;

	ct = 0.6;
	id->x0 = id->spot_x + id->x * id->space + (int)(ct * -id->z);
	id->y0 = id->spot_y + id->y * id->space + (int)(ct / 2 * -id->z);
}

void	ft_projection_parallele2(t_indication *id)
{
	float ct;

	ct = 0.6;
	id->x1 = id->spot_x + id->x * id->space + (int)(ct * -id->z);
	id->y1 = id->spot_y + id->y * id->space + (int)(ct / 2 * -id->z);
}
