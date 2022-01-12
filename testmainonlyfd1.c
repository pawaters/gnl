/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:24:05 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/12 14:49:56 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   main(void)
{
	char	*line;
	int		fd1;
	int		i;

	i = 0;
	fd1 = open("testemptylinefile", O_RDONLY);
	while (i < 10)
	{
		get_next_line(fd1, &line);
		printf("%s\n", line);
		ft_strdel(&line);
		i++;
		ft_putstr("line number ");
		ft_putnbr(i);
		ft_putchar('\n');
	}
	return (0);
}
