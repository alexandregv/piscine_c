/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 05:49:26 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/12 21:12:54 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (tab[i] != 0)
			tab[j++] = tab[i];
		i++;
	}
	i = j;
	while (i < length)
	{
		tab[i] = 0;
		++i;
	}
	return (j);
}
