#ifndef FRACTOL_H 
# define FRACTOL_H

typedef struct	s_fractal
{
	int	x;
	int	y;
	long	xy;
	long	zy;
	void	*mlx;
	void	*img;
	void	*win;
	int	color;
	double	zoom;
	char	*name;
	char	*im_ad;
	int	endian;
	int	max_iter;
	int	line_length;
	int	bits_per_pixel;
}	t_fractal;
#endif
