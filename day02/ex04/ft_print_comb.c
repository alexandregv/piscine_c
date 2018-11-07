/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:02:44 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/04 04:53:11 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);
void	ft_print_number(char i, char j, char k);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				ft_print_number(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_number(char i, char j, char k)
{
	if(!(i == j || i == k || j == k))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		if (!(i == '7' && j == '8' && k == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		k++;
	}
}
