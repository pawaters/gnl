/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 10:51:16 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/14 14:37:56 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	line_output(char **lines_read, char **line)
{
	int			len;
	char		*tmp;

	len = 0;
	while ((*lines_read)[len] != '\n' && (*lines_read)[len] != '\0')
		len++;
	if ((*lines_read)[len] == '\n')
	{
		*line = ft_strsub(*lines_read, 0, len);
		tmp = ft_strdup(&((*lines_read)[len + 1]));
		free(*lines_read);
		*lines_read = tmp;
		if ((*lines_read)[0] == '\0')
			ft_strdel(lines_read);
	}
	else
	{
		*line = ft_strdup(*lines_read);
		ft_strdel(lines_read);
	}
	return (1);
}

int	return_value(char **lines_read, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0)
		{
			if (lines_read[fd][0] == '\0')
				return (0);
			else
			{	
				*line = ft_strdup(lines_read[fd]);
				ft_strdel(&lines_read[fd]);
				return (1);
			}
		}
	else
		return (line_output(&lines_read[fd], line));
}

int	get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*lines_read[MAX_FD + 1];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	
	if (fd < 0)
		return (-1);
	ret = read(fd, buff, 0) + 1;
	if (lines_read[fd] == NULL)
		lines_read[fd] = ft_strdup("");
	if ( fd > MAX_FD || line == NULL || ret - 1 < 0)
		return (-1);
	while (!ft_strchr(lines_read[fd], '\n') && ret >= 0)
	{
		ret = read(fd, buff, BUFF_SIZE);
		if (ret == 0 && lines_read[fd]) 
			break;
		buff[ret] = '\0';
		tmp = ft_strjoin(lines_read[fd], buff);
		free(lines_read[fd]);
		lines_read[fd] = tmp;
		if (ret != BUFF_SIZE)
			break ;
	}
	return (return_value(lines_read, line, ret, fd));
}
