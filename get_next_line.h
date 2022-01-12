/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:07:26 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/12 14:04:39 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUFF_SIZE 8
# define MAX_FD 4096

int	get_next_line(const int fd, char **line);

#endif
