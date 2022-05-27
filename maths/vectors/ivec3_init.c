/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec3_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:59:42 by                   #+#    #+#             */
/*   Updated: 2022/05/27 15:11:57 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	ivec3(int64_t x, int64_t y, int64_t z)
{
	t_ivec3	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

t_ivec3	ivec3_copy(t_ivec3 old)
{
	t_ivec3	vec;

	vec.x = old.x;
	vec.y = old.y;
	vec.z = old.z;
	return (vec);
}

t_ivec3	ivec3_zero(void)
{
	t_ivec3	vec;

	vec.x = 0;
	vec.y = 0;
	vec.z = 0;
	return (vec);
}

t_ivec3	ivec3_set(int64_t value)
{
	t_ivec3	vec;

	vec.x = value;
	vec.y = value;
	vec.z = value;
	return (vec);
}
