/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memseti.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:04:27 by                   #+#    #+#             */
/*   Updated: 2022/01/22 17:04:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memseti(void *b, int c, size_t len)
{
	size_t	i;
	int		*bcpy;

	bcpy = b;
	i = 0;
	while (i < len)
	{
		bcpy[i] = c;
		i++;
	}
	return (b);
}

void	*ft_memsetl(void *b, int64_t c, size_t len)
{
	size_t	i;
	int64_t	*bcpy;

	bcpy = b;
	i = 0;
	while (i < len)
	{
		bcpy[i] = c;
		i++;
	}
	return (b);
}
