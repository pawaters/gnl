/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:24:05 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/12 11:31:30 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   main(void)
{
  char  *line;
  //int	fd2;
  int	fd2;

  //fd2 = open("testfile2", O_RDONLY);
	  fd2 = open("testfile2", O_RDONLY);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  get_next_line(fd2, &line);
	  printf("%s\n", line);
	ft_strdel(&line);
	  return (0);
}
