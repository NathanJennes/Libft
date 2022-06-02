/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stb47 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:40:15 by cybattis          #+#    #+#             */
/*   Updated: 2022/06/02 14:51:08 by stb47            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_vec2(t_vec2 v)
{
	printf("[%f, %f]\n", v.x, v.y);
}

void	ft_print_ivec2(t_ivec2 v)
{
	printf("[%" PRId64 ", % " PRId64 "]\n", v.x, v.y);
}

void	ft_print_vec3(t_vec3 v)
{
	printf("[%f, %f, %f]\n", v.x, v.y, v.z);
}

void	ft_print_vec4(t_vec4 v)
{
	printf("[%f, %f, %f, %f]\n", v.x, v.y, v.z, v.w);
}
