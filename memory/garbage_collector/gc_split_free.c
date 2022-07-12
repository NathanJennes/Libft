/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:19:03 by                   #+#    #+#             */
/*   Updated: 2022/07/12 17:11:41 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gc_split_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		gc_free(tab[i]);
		i++;
	}
	gc_free(tab[i]);
	gc_free(tab);
}

void	gc_free2d(void **ptr, size_t size)
{
	while (size)
	{
		gc_free(ptr[size - 1]);
		size--;
	}
	gc_free(ptr);
}
