/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:52:25 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/16 03:47:25 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	checking_symbols(char arg)
{
	if(arg < '0' && arg == '-')
		return (0);
	else if(arg < '0' && arg == '+')
		return (0);
	else if(arg < '0' && arg == '.')
		return (0);
	else if(arg >= '0' && arg <= '9')
		return (0);
	else 
		return (1);
}
//MODIFICAR O QUITAR LO PIENSO tomorrow
int	is_duplicate(char arg, int flag)
{
	if((arg == '.' && flag == 1)
		return (1);
	return (0);
}
