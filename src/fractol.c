/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:04:10 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/10 21:01:48 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int checking_type_of_set(char *str)
{
	if(!ft_strcmp(str, "julia", 5))
		return (1);
	if(!ft_strcmp(str, "mandelbrot", 10))
		return (2);
	if(!ft_strcmp(str, "tricorn", 7))
		return (3);
	return (0);
}

void lower_case_converter(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(ft_isalpha(str[i]) == 2)
			str[i] += 32;
		i++;
	}
}

int checking_arg(int argc, char **argv)
{
	if(!(checking_type_of_set(argv[1]))
		return (0);
	if(checking_type_of_set(argv[1] == 1 && argc > 1 && argc < 5))
		//Modificar poniendo lo que quieres que ejecute si es julia.
	else if(checking_type_of_set(argv[1] == 2))	
		//Modificar poniendo lo que quieres que ejecute si es mandelbrot.
	else if(checking_type_of_set(argv[1] == 3))
		//Modificar poniendo lo que quieres que ejecute si es tricorn.
	lower_case_converter(argv[1]);
	checking_set(argv[1]);
	if(nbrcompare(argv[2]) && nbrcompare(argv[3]))
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	if(checking_arg(argc, argv))
	{
		//initializing_win();
	}
	return (0);
}
