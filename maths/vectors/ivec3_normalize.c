/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:59:39 by                   #+#    #+#             */
/*   Updated: 2022/01/06 11:39:35 by njennes          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	*ivec3_normalize(t_ivec3 *vec)
{
	double	magnitude;

	magnitude = ivec3_mag(*vec);
	if (magnitude < 0.0001)
		return (vec);
	vec->x /= magnitude;
	vec->y /= magnitude;
	vec->z /= magnitude;
	return (vec);
}

t_ivec3	ivec3_normalized(t_ivec3 vec)
{
	double	magnitude;
	t_ivec3	normalized;

	magnitude = ivec3_mag(vec);
	if (magnitude < 0.0001)
		return (ivec3_zero());
	normalized.x = vec.x / magnitude;
	normalized.y = vec.y / magnitude;
	normalized.z = vec.z / magnitude;
	return (normalized);
}
