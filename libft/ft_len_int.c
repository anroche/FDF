/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:32:53 by anroche           #+#    #+#             */
/*   Updated: 2016/11/27 12:24:10 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_int(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
