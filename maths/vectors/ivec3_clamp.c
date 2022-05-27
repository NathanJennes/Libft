/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec3_clamp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:54:51 by                   #+#    #+#             */
/*   Updated: 2022/05/27 15:10:02 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	*ivec3_clamp_max(t_ivec3 *vec, int64_t x, int64_t y, int64_t z)
{
	if (vec->x > x)
		vec->x = x;
	if (vec->y > y)
		vec->y = y;
	if (vec->z > z)
		vec->z = z;
	return (vec);
}

t_ivec3	*ivec3_clamp_min(t_ivec3 *vec, int64_t x, int64_t y, int64_t z)
{
	if (vec->x < x)
		vec->x = x;
	if (vec->y < y)
		vec->y = y;
	if (vec->z < z)
		vec->z = z;
	return (vec);
}
