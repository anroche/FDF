/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 19:24:00 by anroche           #+#    #+#             */
/*   Updated: 2017/07/23 02:06:47 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fdf.h"

int	main(int ac, char **av)
{
	int				fd;
	int				len_tab;
	t_indication	id;

	len_tab = 0;
	id.map = NULL;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd > 0)
		{
			id.map = ft_parcing(fd, &len_tab);
			if (len_tab != -1)
			{
				id.len_tab = len_tab;
				ft_display(id);
			}
		}
		else
			ft_error(1);
		close(fd);
	}
	else
		ft_error(1);
	return (0);
}
