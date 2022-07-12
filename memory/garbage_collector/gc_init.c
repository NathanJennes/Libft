/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:48:09 by                   #+#    #+#             */
/*   Updated: 2022/07/12 17:14:32 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	gc_init(t_gc *gc);

t_gc	*gc_get(void)
{
	static t_gc	gc = {};

	if (!gc.pointers)
		gc_init(&gc);
	return (&gc);
}

static void	gc_init(t_gc *gc)
{
	if (!gc)
		return ;
	gc->capacity = 10;
	gc->ptrs_count = 0;
	gc->first_free = 0;
	gc->pointers = ft_calloc(gc->capacity, sizeof(void *));
	if (!gc->pointers)
		gc->capacity = 0;
}

void	gc_set_callback(int (*callback)())
{
	t_gc	*gc;

	gc = gc_get();
	gc->callback = callback;
}

int	gc_getfootprint(void)
{
	int		footprint;
	size_t	i;
	t_gc	*gc;

	gc = gc_get();
	i = 0;
	footprint = 0;
	while (i < gc->capacity)
	{
		if (gc->pointers[i])
			footprint++;
		i++;
	}
	return (footprint);
}
