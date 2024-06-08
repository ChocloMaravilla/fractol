/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:52:25 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/08 20:07:09 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int nbrcompare(char *str)
{
	char *buff;
	int i;
	int j;

	buff = "0123456789.";
	i = 0;
	while(str[i])
	{
		j = 0;
		while(buff[j])
		{
			if(buff[j] != str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}