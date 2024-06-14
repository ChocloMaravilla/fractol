/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:04:10 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/14 20:09:55 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int invalid_arg(char *arg1){
	int i;

	i = 0;
	if (!arg1)
		return (-1);
	while(arg1[i])
	{
		if((arg1[i] < '0' && arg1[i] != '.') || (arg1[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

int checking_type_of_set(char *str)
{
	if(!ft_strcmp(str, "julia"))
		return (1);
	if(!ft_strcmp(str, "mandelbrot"))
		return (2);
	if(!ft_strcmp(str, "tricorn"))
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
	lower_case_converter(argv[1]);
	if(!(checking_type_of_set(argv[1])))
		return (0);
	else if(checking_type_of_set(argv[1]) == 1 && argc == 4)
	{	
		if(invalid_arg(argv[2]))
			return (1);
		if(invalid_arg(argv[3]))
			return (1);
		printf("julia\n");
		//Modificar poniendo lo que quieres que ejecute si es julia.
	}
		
	else if(checking_type_of_set(argv[1]) == 2)	
		printf("mandelbrot\n");
		//Modificar poniendo lo que quieres que ejecute si es mandelbrot.
	else if(checking_type_of_set(argv[1]) == 3)
		printf("tricorn\n");
		//Modificar poniendo lo que quieres que ejecute si es tricorn.
	//checking_set(argv[1]);
	//if(nbrcompare(argv[2]) && nbrcompare(argv[3]))
	//	return (1);
	printf("FINISH");
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
