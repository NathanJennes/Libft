/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec2_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:39:04 by njennes           #+#    #+#             */
/*   Updated: 2022/05/18 14:43:00 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	iv2_to_v2(t_ivec2 vec)
{
	return (vec2((double)vec.x, (double)vec.y));
}

t_vec3	iv2_to_v3(t_ivec2 vec)
{
	return (vec3((double)vec.x, (double)vec.y, 0.0f));
}

t_vec4	iv2_to_v4(t_ivec2 vec)
{
	return (vec4((double)vec.x, (double)vec.y, 0.0f, 0.0f));
}
