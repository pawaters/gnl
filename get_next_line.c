/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 10:51:16 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/07 14:47:28 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_next_line(const int fd, char **line)
{
	int			ret;
	
	ret = read(fd, line, 0);
	if (fd < 0 || fd >= MAX_FD || ret < 0 || !heap)
		return (-1);
		
}

