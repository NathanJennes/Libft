/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec2_normalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:17:51 by                   #+#    #+#             */
/*   Updated: 2022/05/17 21:57:09 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec2	*ivec2_normalize(t_ivec2 *vec)
{
	float	magnitude;

	magnitude = ivec2_mag(*vec);
	vec->x /= (int64_t)magnitude;
	vec->y /= (int64_t)magnitude;
	return (vec);
}

t_ivec2	ivec2_normalized(t_ivec2 vec)
{
	float	magnitude;
	t_ivec2	normalized;

	magnitude = ivec2_mag(vec);
	normalized.x = vec.x / (int64_t)magnitude;
	normalized.y = vec.y / (int64_t)magnitude;
	return (normalized);
}
