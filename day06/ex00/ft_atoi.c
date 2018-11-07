/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 14:49:47 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/10 14:05:11 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	return (neg == 1 ? -nbr : nbr);
}
