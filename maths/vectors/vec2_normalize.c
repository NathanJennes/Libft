/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:17:51 by                   #+#    #+#             */
/*   Updated: 2022/05/27 16:29:42 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	*vec2_normalize(t_vec2 *vec)
{
	double	magnitude;

	magnitude = vec2_mag(*vec);
	if (magnitude < 0.0001)
		return (vec);
	vec->x /= magnitude;
	vec->y /= magnitude;
	return (vec);
}

t_vec2	vec2_normalized(t_vec2 vec)
{
	double	magnitude;
	t_vec2	normalized;

	magnitude = vec2_mag(vec);
	if (magnitude < 0.0001)
		return (vec2_zero());
	normalized.x = vec.x / magnitude;
	normalized.y = vec.y / magnitude;
	return (normalized);
}
