/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:40:35 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/10 14:57:02 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*no_spaces(char *src, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] != ' ')
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	int		i;
	int		alert;
	char	arg[512];

	if (argc <= 1)
		return (0);
	i = 0;
	alert = 0;
	while (argv[i])
	{
		if (!ft_strcmp(ft_strlowcase(no_spaces(argv[i], arg)), "president")
				|| !ft_strcmp(ft_strlowcase(no_spaces(argv[i], arg)), "attack")
				|| !ft_strcmp(ft_strlowcase(no_spaces(argv[i], arg)), "bauer"))
			alert = 1;
		i++;
	}
	if (alert)
		write(1, "Alert!!!\n", 9);
	return (0);
}
