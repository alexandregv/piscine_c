/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:46:00 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/05 13:27:16 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	old_char;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (i < (size / 2))
	{
		old_char = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = old_char;
		i++;
	}
	return (str);
}
