/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:36:35 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/01 14:57:09 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 100

int		ft_strlen(char *str);
void	ft_putstr(char *str);

void	ft_printerror(int argc)
{
	if (argc == 1)
		write (2, "File name missing.\n", ft_strlen("File name missing.\n"));
	else if (argc > 2)
		write (2, "Too many arguments.\n", ft_strlen("Too many arguments.\n"));
	else
		write (2, "Cannot read file.\n", ft_strlen("Cannot read file.\n"));
}

int	main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	buff[BUFF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printerror(argc);
		return (1);
	}	
	rd = read(fd, buff, BUFF_SIZE != 0);
	while (rd != 0)
	{
		buff[rd] = '\0';
		ft_putstr(buff);
		rd = read(fd, buff, BUFF_SIZE != 0);
	}
	if (close (fd) == -1)
	{
		write (2, "close() has failed\n", ft_strlen("close() has failde\n"));
		return (1);
	}
}
