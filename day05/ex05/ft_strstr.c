/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:51:51 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/09 10:57:37 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int pos1;
	int pos2;

	if (to_find[0] == '\0')
		return (str);
	pos1 = 0;
	while (str[pos1] != '\0')
	{
		pos2 = 0;
		while (to_find[pos2] == str[pos1 + pos2])
		{
			if (to_find[pos2 + 1] == '\0')
				return (str + pos1);
			pos2++;
		}
		pos1++;
	}
	return (0);
}
