/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:39:59 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/13 20:34:41 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int length;

	length = 0;
	while (dest[length])
		length++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		size;

	i = 1;
	size = 0;
	while (i < argc - 1)
		size += ft_strlen(argv[i++]);
	args = (char*)malloc(sizeof(char) * size + 1);
	i = 1;
	while (i < argc - 1)
	{
		ft_strcat(args, argv[i]);
		if (i != argc - 2)
			ft_strcat(args, "\n");
		i++;
	}
	return (args);
}
