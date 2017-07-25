/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 16:32:43 by anroche           #+#    #+#             */
/*   Updated: 2017/07/23 02:04:27 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fdf.h"

int			*ft_check(char *line, int **len_tab)
{
	char	**tab;
	int		i;
	int		*array;

	i = 0;
	tab = NULL;
	tab = ft_strsplit(line, ' ');
	**len_tab = ft_count_word(line, ' ');
	while (i < ft_count_word(line, ' '))
		if (ft_benumber(tab[i++]) == 0)
			ft_error(3);
	array = ft_intsplit(line, ' ');
	return (array);
}

t_list		*ft_parcing(int fd, int *len_tab)
{
	char	*line;
	int		*array;
	int		stock;
	t_list	*map;
	int		err;

	map = NULL;
	line = NULL;
	*len_tab = 0;
	stock = 0;
	array = NULL;
	while ((err = get_next_line(fd, &line)) > 0)
	{
		if (*len_tab == stock)
		{
			array = ft_check(line, &len_tab);
			ft_list_push_back(&map, array);
			stock ==  0 ? stock = *len_tab : stock;
		}
		else
			*len_tab = -1;
	}
	if (err == -1)
		ft_error(1);
	return (map);
}
