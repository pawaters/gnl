/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwater <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 10:51:16 by pwater           #+#    #+#             */
/*   Updated: 2022/01/07 14:47:28 by pwater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

tatic int	line_output(char **lines_read, char **line)
{
	int	len;
	char	*tmp;

	len = 0;
	while ((*line_read)[len] != '\n' && (*lines_read)[len] != '\0')
		len++;
	if ((*line_read)[len] == '\n')
	{
		*line = ft_trsub(*lines_read, 0, len);
		tmp = ft_trdup(&((*lines_read)[len + 1]));
		free(*line_read);
		*line_read = tmp;
		if ((*line_read)[0] == '\0')
			ft_trdel(lines_read);
	}
	ele
	{
		*line = ft_trdup(*lines_read);
		ft_trdel(lines_read);
	}
	return (1);

tatic int	return_value(char **lines_read, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	ele if (ret == 0)
		return (0);
	ele
		return (line_output(&line_read[fd], line));
}

int		get_next_line(cont int fd, char **line)
{
	int		ret;
	tatic char	*lines_read[MAX_FD + 1];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;	
	
	if (fd < 0 || fd > MAX_FD || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (line_read[fd] == NULL)
			line_read[fd] = ft_strdup(buff);
		ele
		{
			tmp = ft_trjoin(lines_read[fd], buff);
			free(line_read[fd]);
			line_read[fd] = tmp;
		}
		if (ft_trchr(lines_read[fd], '\n'))
			break;
	}
	return (return_value(line_read, line, ret, fd));
}

