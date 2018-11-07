/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 10:30:29 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/22 15:16:36 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		cat_stdin(void)
{
	char	buffer[1];
	int		ret;

	while ((ret = read(0, buffer, 1)))
	{
		buffer[ret] = '\0';
		ft_putchar(buffer[0]);
	}
	return (0);
}

int		cat_files(int argc, char **argv)
{
	int		i;
	int		fd;
	char	buffer;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buffer, 1))
				ft_putchar(buffer);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
			return (1);
		}
		close(fd);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (cat_stdin());
	else
		return (cat_files(argc, argv));
}
