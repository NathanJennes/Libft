/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:45:30 by njennes           #+#    #+#             */
/*   Updated: 2022/07/12 17:37:49 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_line(int fd, char *buffer, char **line);
static int	ft_get_line_length(char *line, int bytes_read);
static int	ft_add_to_line(char **line, char *buffer, int bytes_read);

char	*gc_get_next_line(int fd)
{
	static char	buffer[OPEN_MAX][BUFFER_SIZE];
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX)
		return (NULL);
	line = gc_strdup("");
	return (find_line(fd, buffer[fd], &line));
}

static char	*find_line(int fd, char *buffer, char **line)
{
	int		bytes_read;
	int		add_line_result;

	if (ft_strlen(buffer) == 0)
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	else
		bytes_read = ft_strlen(buffer);
	if (ft_strlen(*line) > 0 && bytes_read == 0)
		return (*line);
	if (bytes_read <= 0)
	{
		gc_free(*line);
		return (NULL);
	}
	add_line_result = ft_add_to_line(line, buffer, bytes_read);
	if (add_line_result == 0)
		return (find_line(fd, buffer, line));
	else
		return (*line);
}

static	int	ft_get_line_length(char *line, int bytes_read)
{
	int	i;

	i = 0;
	while (i < bytes_read && line[i] != '\n' && line[i] != EOF)
		i++;
	if (i < bytes_read && line[i] == '\n')
		i++;
	return (i);
}

static	int	ft_add_to_line(char **line, char *buffer, int bytes_read)
{
	int		new_length;
	char	*new_line;

	new_length = ft_get_line_length(buffer, bytes_read);
	new_line = gc_calloc(ft_strlen(*line) + new_length + 1, sizeof(char));
	ft_memmove(new_line, *line, ft_strlen(*line));
	ft_memmove(&new_line[ft_strlen(*line)], buffer, new_length);
	new_line[ft_strlen(*line) + new_length] = 0;
	gc_free(*line);
	*line = new_line;
	if (new_length < bytes_read || buffer[new_length - 1] == '\n')
	{
		ft_memmove(buffer, &buffer[new_length], bytes_read - new_length);
		buffer[bytes_read - new_length] = 0;
		return (1);
	}
	buffer[0] = 0;
	return (0);
}
