/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec3_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:17:48 by                   #+#    #+#             */
/*   Updated: 2022/05/27 15:08:50 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	*ivec3_add(t_ivec3 *self, const t_ivec3 other)
{
	self->x += other.x;
	self->y += other.y;
	self->z += other.z;
	return (self);
}
