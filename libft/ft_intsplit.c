/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 20:24:24 by anroche           #+#    #+#             */
/*   Updated: 2017/06/16 16:26:34 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_count_word(const char *s, char c);

int		*ft_intsplit(const char *s, char c)
{
	int     i;
	int     j;
	int     word;
	int		*array;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word = ft_count_word(s, c);
	if ((array = (int *)malloc(sizeof(int) * (word + 1))) == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (j < word && s[i] != '\0')
	{
		array[j] = ft_atoi(ft_split_sentence(s, c, &i));
		j++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	array[j] = 0;
	return (array);
}
