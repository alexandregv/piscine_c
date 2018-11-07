/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:57:06 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/20 23:36:34 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		do_op(char *x, char op, char *y, int (*calc[5]) (int x, int y))
{
	int		i;
	int		ok;
	char	*list;

	i = 0;
	ok = 0;
	list = "+-*/%";
	while (i < 5)
	{
		if (op == list[i])
		{
			if (op == '/' && *y == '0')
				ft_putstr("Stop : division by zero");
			else if (op == '%' && *y == '0')
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr(calc[i](ft_atoi(x), ft_atoi(y)));
			ok = 1;
		}
		i++;
	}
	if (!ok)
		ft_putstr("0");
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int		(*calc[5]) (int x, int y);

	if (argc != 4)
		return (0);
	calc[0] = &add;
	calc[1] = &subtract;
	calc[2] = &multiply;
	calc[3] = &divide;
	calc[4] = &modulo;
	do_op(argv[1], argv[2][0], argv[3], calc);
	return (0);
}
