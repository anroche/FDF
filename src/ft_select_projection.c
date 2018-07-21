/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_projection.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 05:16:21 by anroche           #+#    #+#             */
/*   Updated: 2017/08/07 19:29:16 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fdf.h"

void	ft_select_projection(char c, t_indication *id)
{
	if (c == 'I')
		ft_projection_isometrique(id);
	else
		ft_projection_parallele(id);
}

void	ft_select_projection2(char c, t_indication *id)
{
	if (c == 'I')
		ft_projection_isometrique2(id);
	else
		ft_projection_parallele2(id);
}
