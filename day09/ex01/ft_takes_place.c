/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:50:38 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/09 19:45:05 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n <= -2147483648)
	{
		n = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	do_normal_cases(int hour)
{
	int next_hour;

	if (hour > 12)
	{
		hour = hour - 12;
		next_hour = hour + 1;
		ft_putnbr(hour);
		ft_putstr(".00 P.M. AND ");
		ft_putnbr(next_hour);
		ft_putstr(".00 P.M.");
	}
	else
	{
		next_hour = hour + 1;
		ft_putnbr(hour);
		ft_putstr(".00 A.M. AND ");
		ft_putnbr(next_hour);
		ft_putstr(".00 A.M.");
	}
}

void	ft_takes_place(int hour)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 11)
		ft_putstr("11.00 A.M. AND 12.00 PM");
	else if (hour == 12)
		ft_putstr("12.00 P.M. AND 01.00 PM");
	else if (hour == 23)
		ft_putstr("11.00 P.M. AND 12.00 AM");
	else if (hour == 24)
		ft_putstr("12.00 A.M. AND 01.00 AM");
	else
	{
		do_normal_cases(hour);
	}
	ft_putchar('\n');
}
