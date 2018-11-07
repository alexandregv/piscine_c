/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:32:25 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/17 02:59:08 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int				i;
	int				size;
	char			*dest;

	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock_par;
	int				i;
	int				j;

	if (!(stock_par = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		stock_par[i].size_param = j;
		stock_par[i].str = av[i];
		stock_par[i].copy = ft_strdup(av[i]);
		stock_par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock_par[i].str = 0;
	return (stock_par);
}
