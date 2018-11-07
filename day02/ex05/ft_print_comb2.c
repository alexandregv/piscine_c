/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:02:46 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/03 12:59:08 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = -1;
	while (++left <= 98)
	{
		right = left;
		while (++right <= 99)
		{
			ft_putchar(left / 10 + '0');
			ft_putchar(left % 10 + '0');
			ft_putchar(' ');
			ft_putchar(right / 10 + '0');
			ft_putchar(right % 10 + '0');
			if (left != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
