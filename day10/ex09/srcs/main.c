/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:57:06 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/21 12:55:45 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

int					ft_usage(int x, int y)
{
	unsigned long	i;

	i = 0;
	ft_putstr("error : only [");
	while (i < (sizeof(g_opptab) / sizeof(*g_opptab)))
	{
		ft_putchar(' ');
		ft_putstr(g_opptab[i].op);
		i++;
	}
	ft_putstr("] are accepted.");
	(void)x;
	(void)y;
	return (0);
}

void				do_op(char *x, char *op, char *y)
{
	unsigned long	i;
	int				ok;

	i = 0;
	ok = 0;
	while (i < (sizeof(g_opptab) / sizeof(*g_opptab)))
	{
		if (ft_strcmp(op, g_opptab[i].op) == 0)
		{
			if (*op == '/' && *y == '0')
				ft_putstr("Stop : division by zero");
			else if (*op == '%' && *y == '0')
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr(g_opptab[i].f(ft_atoi(x), ft_atoi(y)));
			ok = 1;
		}
		i++;
	}
	if (!ok)
		ft_usage(0, 0);
	ft_putchar('\n');
}

int					main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	do_op(argv[1], argv[2], argv[3]);
	return (0);
}
