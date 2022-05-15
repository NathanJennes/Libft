/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:23:57 by njennes           #+#    #+#             */
/*   Updated: 2022/05/15 15:41:05 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

char	*ft_strrnstr(const char *haystack, const char *needle, size_t len)
{
	int64_t	i;
	int64_t	j;
	int64_t	needle_len;

	if (!needle[0] || len == 0)
		return ((char *)haystack);
	i = len - 1;
	needle_len = (int64_t)ft_strlen(needle) - 1;
	while (i > 0)
	{
		j = needle_len;
		while (j > 0 && i - needle_len + j > 0 && haystack[i - needle_len + j] == needle[j])
			j--;
		if (j == 0)
			return ((char *)(haystack + i - needle_len));
		i--;
	}
	return (NULL);
}
