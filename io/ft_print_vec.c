/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:40:15 by cybattis          #+#    #+#             */
/*   Updated: 2022/05/18 18:44:41 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_vec2(t_vec2 v)
{
	printf("[%f, %f]\n", v.x, v.y);
}

void	ft_print_ivec2(t_ivec2 v)
{
	printf("[%lld, %lld]\n", v.x, v.y);
}

void	ft_print_vec3(t_vec3 v)
{
	printf("[%f, %f, %f]\n", v.x, v.y, v.z);
}

void	ft_print_vec4(t_vec4 v)
{
	printf("[%f, %f, %f, %f]\n", v.x, v.y, v.z, v.w);
}
