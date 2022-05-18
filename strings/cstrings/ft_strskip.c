/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strskip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:36:57 by njennes           #+#    #+#             */
/*   Updated: 2022/05/18 17:54:32 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strskip_digit(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	return (&str[i]);
}

char	*ft_strskip_alpha(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && ft_isalpha(str[i]))
		i++;
	return (&str[i]);
}

char	*ft_strskip_space(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	return (&str[i]);
}

char	*ft_strskip_alnum(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && ft_isalnum(str[i]))
		i++;
	return (&str[i]);
}
