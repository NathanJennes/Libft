/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:25:27 by njennes           #+#    #+#             */
/*   Updated: 2022/07/12 17:00:09 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gc_strdup(const char *s1)
{
	char	*newstr;

	if (!s1)
		return (NULL);
	newstr = gc_calloc(ft_strlen(s1) + 1, sizeof(char));
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	return (newstr);
}
