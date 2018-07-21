/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 14:21:44 by anroche           #+#    #+#             */
/*   Updated: 2017/08/07 19:24:38 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_error(int n)
{
	if (n == 1)
		ft_putstr("ERREUR ARGUMENT\n");
	if (n == 2)
		ft_putstr("ARGUMENT NON VALIDE\n");
	if (n == 3)
		ft_putstr("ERREUR CARTE\n");
	exit(0);
	return ;
}
