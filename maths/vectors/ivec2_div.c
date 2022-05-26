/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec2_div.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:17:58 by                   #+#    #+#             */
/*   Updated: 2022/05/17 21:54:18 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec2	*ivec2_divi(t_ivec2 *self, int64_t value)
{
	self->x /= value;
	self->y /= value;
	return (self);
}

t_ivec2	*ivec2_divf(t_ivec2 *self, double value)
{
	self->x /= (int64_t)value;
	self->y /= (int64_t)value;
	return (self);
}

t_ivec2	*ivec2_divv2(t_ivec2 *self, const t_ivec2 vec)
{
	self->x /= vec.x;
	self->y /= vec.y;
	return (self);
}
