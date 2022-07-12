/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:13:47 by                   #+#    #+#             */
/*   Updated: 2022/07/12 17:06:35 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gc_free(void *ptr)
{
	size_t	i;
	t_gc	*gc;

	gc = gc_get();
	if (!gc || gc->capacity == 0)
		return ;
	i = 0;
	while (i < gc->capacity && gc->pointers[i] != ptr)
		i++;
	if (i >= gc->capacity || gc->pointers[i] == NULL)
		return ;
	else
		gc->pointers[i] = NULL;
	if (i < gc->first_free)
		gc->first_free = i;
	gc->ptrs_count--;
	free(ptr);
}

void	gc_destroy(void **ptr)
{
	if (!ptr)
		return ;
	gc_free(*ptr);
	*ptr = NULL;
}

void	gc_clean(void)
{
	size_t	i;
	t_gc	*gc;

	gc = gc_get();
	if (!gc || gc->capacity == 0)
		return ;
	i = 0;
	while (i < gc->capacity)
	{
		if (gc->pointers[i])
			free(gc->pointers[i]);
		i++;
	}
	free(gc->pointers);
	gc->capacity = 0;
}
