/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:34:31 by njennes           #+#    #+#             */
/*   Updated: 2022/05/17 14:34:44 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_minui(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

uint64_t	ft_mini(uint64_t a, uint64_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

double	ft_minf(double a, double b)
{
	if (a <= b)
		return (a);
	return (b);
}
