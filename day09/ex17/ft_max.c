/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:16:04 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/10 13:20:13 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	while (i < lentgh)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
