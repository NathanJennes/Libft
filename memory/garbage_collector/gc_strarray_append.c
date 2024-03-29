/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strarray_append.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:26:44 by njennes           #+#    #+#             */
/*   Updated: 2022/07/12 17:00:09 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**gc_strarray_append(char **array, char *str)
{
	size_t	size;
	char	**new_array;

	if (!array || !str)
		return (array);
	size = gc_strarray_size(array);
	new_array = gc_calloc(size + 2, sizeof (char *));
	ft_memmove(new_array, array, size * sizeof (char *));
	new_array[size] = gc_strdup(str);
	gc_free(array);
	return (new_array);
}
