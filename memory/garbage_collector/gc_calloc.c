/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:05:46 by                   #+#    #+#             */
/*   Updated: 2022/07/12 17:03:06 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gc_grow(void)
{
	t_gc	*gc;
	void	**new_ptr;

	gc = gc_get();
	if (!gc)
		return (0);
	new_ptr = ft_calloc(gc->capacity * 2, sizeof (void *));
	if (!new_ptr)
	{
		if (gc->callback)
			gc->callback(gc->param);
		return (0);
	}
	ft_memmove(new_ptr, gc->pointers, gc->capacity * sizeof(void *));
	free(gc->pointers);
	gc->pointers = new_ptr;
	gc->capacity *= 2;
	return (1);
}

static void	insert_ptr(void *ptr)
{
	t_gc	*gc;
	size_t	i;

	gc = gc_get();
	if (!gc)
		return ;
	i = gc->first_free;
	gc->pointers[i] = ptr;
	while (i < gc->capacity && gc->pointers[i])
		i++;
	gc->first_free = i;
	gc->ptrs_count++;
}

void	*gc_calloc(size_t count, size_t size)
{
	void	*ptr;
	t_gc	*gc;

	gc = gc_get();
	if (!gc)
		return (NULL);
	ptr = ft_calloc(count, size);
	if (!ptr)
	{
		if (gc->callback)
			gc->callback(gc->param);
		return (NULL);
	}
	if (gc->ptrs_count >= gc->capacity)
	{
		if (!gc_grow())
		{
			free(ptr);
			if (gc->callback)
				gc->callback(gc->param);
			return (NULL);
		}
	}
	insert_ptr(ptr);
	return (ptr);
}
