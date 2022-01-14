/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:24:05 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/14 14:28:34 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   main(void)
{
	char	*line;
	int		fd1;
	int 	fd2;
	int		i;

	i = 0;
	fd1 = open("testfile1", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	while (i < 2)
	{
		ft_putstr("\n_________________\niteration / line number: ");
		ft_putnbr(i);
		ft_putstr("\n_________________\n");
		ft_putstr("Test file 1\n");
		ft_putstr("Return Value:");
		ft_putnbr(get_next_line(fd1, &line));
		ft_putstr("\nLine output: ");
		printf("%s\n", line);
		ft_strdel(&line);
		ft_putstr("\nTest file 2");
		ft_putstr("\nReturn Value:");
		ft_putnbr(get_next_line(fd2, &line));
		ft_putstr("\nLine output: ");
		printf("%s\n", line);
		ft_strdel(&line);
		ft_putstr("\nTest with fd = - 1000, line = NULL");
		ft_putstr("\nReturn Value expected --> -1 :");
		ft_putnbr(get_next_line(-1000, NULL));
		ft_putstr("\nLine output: ");
		printf("%s\n", line);
		ft_strdel(&line);
		i++;
	}
	system("leaks a.out");
	return (0);
}
