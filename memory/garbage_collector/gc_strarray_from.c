/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strarray_from.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:26:44 by njennes           #+#    #+#             */
/*   Updated: 2022/07/12 17:00:09 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**gc_strarray_from(char **other, size_t size)
{
	size_t	i;
	char	**array;

	if (!other)
		return (gc_strarray_init());
	array = gc_calloc(size + 1, sizeof (char *));
	ft_memmove(array, other, size * sizeof (char *));
	i = 0;
	while (i < size)
	{
		array[i] = gc_strdup(other[i]);
		i++;
	}
	return (array);
}
