/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ends_with.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:08:48 by njennes           #+#    #+#             */
/*   Updated: 2022/05/15 15:15:17 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_end_with(char *str, char *end)
{
	char	*ending;

	ending = ft_strrnstr(str, end, ft_strlen(str));
	if (!ending)
		return (0);
	if (ft_strlen(ending) > ft_strlen(end))
		return (0);
	return (1);

}
