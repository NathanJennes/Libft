/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ivec3_lerpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:51:20 by                   #+#    #+#             */
/*   Updated: 2022/05/27 15:12:29 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ivec3	ivec3_lerpf(t_ivec3 base, t_ivec3 high, double value)
{
	t_ivec3	vec;

	vec.x = (int64_t)ft_lerpf(base.x, high.x, value);
	vec.y = (int64_t)ft_lerpf(base.y, high.y, value);
	vec.z = (int64_t)ft_lerpf(base.z, high.z, value);
	return (vec);
}
