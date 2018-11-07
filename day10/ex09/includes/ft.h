/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 19:00:49 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/21 12:55:42 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int n);
int				ft_atoi(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_usage(int x, int y);
int				ft_mul(int x, int y);
int				ft_div(int x, int y);
int				ft_mod(int x, int y);
int				ft_add(int x, int y);
int				ft_sub(int x, int y);

typedef struct	s_opp
{
	char		*op;
	int			(*f) (int x, int y);
}				t_opp;

#endif
