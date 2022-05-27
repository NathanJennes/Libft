/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:59:43 by                   #+#    #+#             */
/*   Updated: 2022/01/06 11:39:35 by njennes          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	*ivec3_divi(t_ivec3 *self, int64_t value)
{
	self->x /= value;
	self->y /= value;
	self->z /= value;
	return (self);
}

t_ivec3	*ivec3_divf(t_ivec3 *self, double value)
{
	self->x /= value;
	self->y /= value;
	self->z /= value;
	return (self);
}

t_ivec3	*ivec3_divv3(t_ivec3 *self, const t_ivec3 vec)
{
	self->x /= vec.x;
	self->y /= vec.y;
	self->z /= vec.z;
	return (self);
}
