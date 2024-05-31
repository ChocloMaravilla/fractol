/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:04:10 by rmedina-          #+#    #+#             */
/*   Updated: 2024/05/31 21:17:50 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int checking_type_of_set(char *str)
{
	if(!ft_strncmp(str, "julia", 5))
		return (1);
	if(!ft_strncmp(str, "mandelbrot", 10))
		return (2);
	if(!ft_strncmp(str, "tricorn", 7))
		return (3);
	return (0);
}
int checking_set(char *str)
{
	int type;

	type = checking_type_of_set(str);
	if(type == 1)
	{
		//Modificar poniendo lo que quieres que ejecute si es julia.
		printf("Test julia");
	}
	else if(type == 2) 
	{
		//Modificar poniendo lo que quieres que ejecute si es mandelbrot.
	   	printf("Test mandelbrot");
   	}
	else if (type == 3)
	{
		//Modificar poniendo lo que quieres que ejecute si es tricorn.
		printf("Test tricorn");
	}
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
	int	i;
	int len;
	if(argc < 2)
		return (0);
	len = ft_strlen(argv[1]);
	i = 0;
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
