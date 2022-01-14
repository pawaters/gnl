/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:24:05 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/12 17:15:22 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   main(void)
{
	char	*line;
	int		fd1;
	int 	fd2;
	int		fd_empty;
	int		i;

	i = 0;
	fd1 = open("testfile1", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	fd_empty = open("testemptyfile", O_RDONLY);
	while (i < 10)
	{
		ft_putstr("Return Value:\n");
		ft_putnbr(get_next_line(fd1, &line));
		printf("\n%s\n", line);
		ft_strdel(&line);
		ft_putstr("Return Value:\n");
		ft_putnbr(get_next_line(fd2, &line));
		printf("\n%s\n", line);
		ft_strdel(&line);
		ft_putstr("Return Value:\n");
		ft_putnbr(get_next_line(-1, &line));
		printf("\n%s\n", line);
		ft_strdel(&line);
		i++;
		ft_putstr("iteration number ");
		ft_putnbr(i);
		ft_putchar('\n');
	}
	system("leaks a.out");
	return (0);
}
