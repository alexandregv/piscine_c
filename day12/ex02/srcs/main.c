/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:49:30 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/22 15:24:20 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			get_file_length(char *title, int fd, char buffer)
{
	int		length;

	length = 0;
	fd = open(title, O_RDONLY);
	if (fd >= 0)
	{
		while (read(fd, &buffer, 1))
			length++;
	}
	else
	{
		ft_putstr("ft_cat: ");
		ft_putstr(title);
		ft_putstr(": No such file or directory\n");
		return (1);
	}
	close(fd);
	return (length);
}

void		show_filename(int argc, char *title)
{
	if (argc > 4)
	{
		ft_putstr("==> ");
		ft_putstr(title);
		ft_putstr(" <==\n");
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	int		fd;
	int		length;
	char	buffer;

	i = 3;
	while (i < argc)
	{
		length = get_file_length(argv[i], fd, buffer);
		show_filename(argc, argv[i]);
		j = 0;
		fd = open(argv[i], O_RDONLY);
		while (read(fd, &buffer, 1))
		{
			if (j >= (length - ft_atoi(argv[2])))
				ft_putchar(buffer);
			j++;
		}
		if (i != argc - 1)
			ft_putchar('\n');
		close(fd);
		i++;
	}
	return (0);
}
