#include "fractol.h"
int checking_isset(argv[1])
{
	if(argv[1] == "julia")
	{
	}
	else if(argv[1] == "mandelbrot")
		return (1);
	else if (argv[1] == "tricorn")
		return (1);
	return (0);
}
void lower_case_converter(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(ft_isalpha(argv[i]) == 2)
			str[i] += 32;
		i++;
	}
}
int check_args(char *arg1, char *arg2)
{
	int	i;
	i = 0;
	while(ft_isdigit(arg1[i]) || arg1[i] == '.')
	{
		i++;
	}
}
int checking_isalpha(int argc, char **argv)
{
	int	i;
	int len;
	if(argc == NULL || argv == NULL)
		return (0);
	len = ft_strlen(argv[1]);
	i = 0;
	while(argv[1][i])
	{
		if(ft_isalpha(argv[1][i])
			i++;
		else
			break;
	}
	if(i != len)
		return (1);
	lower_case_converter(argv[1]);
	checking_isset(argv[1]);
	return (0);
}
int main(int argc, char **argv)
{
	if(checking_arg(argc, argv))
	{
		initializing_win();
	}
	return (0);
}
