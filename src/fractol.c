#include "fractol.h"
static int	checking_special_chars(char *c)
{
	size_t j;
	int	flag;

	j = 0;
	flag = 0;
	if((s[j] == '-' || s[j] == '+') && s[j + 1])	
		j++;
	while (j < ft_strlen(s))
	{
		if (!ft_isdigit(s[j]))
		{
			if (s[j] == '.' && flag == 0 && ft_isdigit(s[j + 1]))
			{
				flag = 1;
				j++;
			}
			else
				return (0);
		}
	}
	j++;
}
return (1);
static int	(char **argv, int n)
{
	char *str;
	double num;

	while(n < 4)
	{
		str = argv[n];
		if (ft_strlen(argv[n]) == 0)
			return (0);
		if (checking_special_chars(str) == 0)
			return (0);
		num = ft_atod(argv[i], 0, 0.1, 0);
		if (num < -2 || num > 2)
			return (0);
		i++;
	}
	return (i);
}
int arg_checking(int argc, char **argv)
{
	if(!ft_strncmp("julia", argc[1], 6) && argc == 2)
		return (1);
	else if(!ft_strncmp("julia", argc[1], 6) && argc == 4)
	{
		if(check_avector(argc, 2) == 1)
			return (1);
		return (0);
	}
	else if (!ft_strncmp("mandelbrot", argv[1], 11) && argc == 2)
		return (1);
	else if (!ft_strncmp("tricorn", argv[1], 8) && argc == 2)
		return (1);
	return (0);

}
int main(int argc, char **argv)
{
	t_fractal fractol;

	if(argc < 2)
		return (0);
	if(arg_checking(argc, argv) == 1)
	{
		
	}
	return (0);
}
