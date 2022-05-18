/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:39:04 by njennes           #+#    #+#             */
/*   Updated: 2022/05/18 14:41:19 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec2	v2_to_iv2(t_vec2 vec)
{
	return (ivec2((int64_t)vec.x, (int64_t)vec.y));
}

t_vec3	v2_to_v3(t_vec2 vec)
{
	return (vec3(vec.x, vec.y, 0.0f));
}

t_vec4	v2_to_v4(t_vec2 vec)
{
	return (vec4(vec.x, vec.y, 0.0f, 0.0f));
}
