/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec3_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:59:40 by                   #+#    #+#             */
/*   Updated: 2022/05/27 15:13:08 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	*ivec3_multi(t_ivec3 *self, int64_t value)
{
	self->x *= value;
	self->y *= value;
	self->z *= value;
	return (self);
}

t_ivec3	*ivec3_multf(t_ivec3 *self, double value)
{
	self->x *= value;
	self->y *= value;
	self->z *= value;
	return (self);
}

t_ivec3	*ivec3_multv3(t_ivec3 *self, const t_ivec3 vec)
{
	self->x *= vec.x;
	self->y *= vec.y;
	self->z *= vec.z;
	return (self);
}
