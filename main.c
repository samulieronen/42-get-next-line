/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:23:54 by seronen           #+#    #+#             */
/*   Updated: 2019/11/14 11:05:21 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int 	main(int argc, char **argv)
{
	static char *line;
	int fd;
	int ret;
	int paramnbr;

//	/*
// ONE PARAMETER 


	if (argc == 2)
	{
		printf("$$======$$ BUFF_SIZE: %d $$======$$\n", BUFF_SIZE);
		fd = open(argv[1], O_RDONLY);
//      printf("FD: %d\n", fd);
        ret = 1;
//		fd = ;
		while ((ret > 0))
		{
            ret = get_next_line(fd, &line);
//			printf("RET: %d\n", ret);
			if (ret == -1)
			{
				printf("An unexpected error occured!\n");
			}
			if (ret != -1 && line != NULL)
			{
				printf("%s\n", line);
				ft_strdel(&line);
			}
		}
//		printf("Final ret: %d\n", ret);
//		printf("%s\n", line);
//		ft_strdel(&line);
		if (ret == 0)
		{
			printf("\nReading completed.\n");
		}
		close(fd);
	}

// NONE PARAMETER

	if (argc == 1)
	{
		printf("\nText from stdin, fd = 0!\n");
		fd = 0;
		printf("$$======$$ BUFF_SIZE: %d $$======$$\n", BUFF_SIZE);
		while ((ret = (get_next_line(fd, &line)) > 0))
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
		if (ret == 0)
		{
			printf("Reading completed.\n");
		}
		if (ret == -1)
		{
			printf("\nAn unexpected error occured!\n");
		}
//		printf("%s\n", line);
		close(fd);
	}

// MORE PARAMETERS

	if (argc > 2) 	
	{
        printf("$$======$$ BUFF_SIZE: %d $$======$$\n", BUFF_SIZE);
		paramnbr = 1;
		while (paramnbr < argc)
		{
			fd = open(argv[paramnbr], O_RDONLY);
			ret = 1;
			while ((ret = (get_next_line(fd, &line)) > 0))
			{
				printf("%s\n", line);
				ft_strdel(&line);
			}
			if (ret == 0)
			{
				printf("Reading completed.\n");
			}
			if (ret == -1)
			{
				printf("\nAn unexpected error occured!\n");
			}
			close(fd);
			++paramnbr;
		}
	}
//	*/

// TEST LEAKS

 
//	while (1==1)
//		ret = 1;
 


// READ ARGV[2] AMOUNT OF LINES OUT OF FILE ARGV[1]
  /*

int i;
int RDAM;

paramnbr = 0;
	if (argc == 1)
	{
		printf("Insert file as 1. param and number of lines to be read as 2. param.\n");
		return (0);
	}
	if (argc == 3)
	{
		RDAM = ft_atoi(argv[2]);
	}
	if (argc == 2)
	{
		printf("Insert linecount as second param!\n");
		return (0);
	}
	if (RDAM < 1)
	{
		printf("Amount must be over 0.\n");
		return (0);
	}
	if (argc == 3)
	{
		printf("$$======$$ BUFF_SIZE: %d $$======$$\n", BUFF_SIZE);
		if(!(fd = open(argv[1], O_RDONLY)))
		{
			printf("Opening file failed!\n");
			return (0);
		}
		i = 0;
		while (i < RDAM)
		{
			ret = get_next_line(fd, &line);
			if (ret == -1)
			{
				printf("An unexpected error occured!\n");
				break ;
			}
			if (ret != -1 && line != NULL)
			{
				printf("%s\n", line);
				ft_strdel(&line);
			}
			i++;
		}
		close(fd);
	}
 */
	return (0);
}
