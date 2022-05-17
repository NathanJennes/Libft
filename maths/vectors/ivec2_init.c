/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:59:45 by                   #+#    #+#             */
/*   Updated: 2022/01/06 11:39:35 by njennes          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec2	ivec2(int64_t x, int64_t y)
{
	t_ivec2	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}

t_ivec2	ivec2_copy(t_ivec2 old)
{
	t_ivec2	vec;

	vec.x = old.x;
	vec.y = old.y;
	return (vec);
}

t_ivec2	ivec2_zero(void)
{
	t_ivec2	vec;

	vec.x = 0;
	vec.y = 0;
	return (vec);
}

t_ivec2	ivec2_set(int64_t value)
{
	t_ivec2	vec;

	vec.x = value;
	vec.y = value;
	return (vec);
}
