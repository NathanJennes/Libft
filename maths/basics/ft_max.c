/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:53:18 by njennes           #+#    #+#             */
/*   Updated: 2022/04/04 15:53:18 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	ft_maxui(uint64_t a, uint64_t b)
{
	if (a >= b)
		return (a);
	return (b);
}

int64_t	ft_maxi(int64_t a, int64_t b)
{
	if (a >= b)
		return (a);
	return (b);
}

double	ft_maxf(double a, double b)
{
	if (a >= b)
		return (a);
	return (b);
}
