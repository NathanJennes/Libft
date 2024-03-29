/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsetf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:07:21 by                   #+#    #+#             */
/*   Updated: 2022/01/22 17:07:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memsetd(void *b, double c, size_t len)
{
	size_t	i;
	float	*bcpy;

	bcpy = b;
	i = 0;
	while (i < len)
	{
		bcpy[i] = c;
		i++;
	}
	return (b);
}
