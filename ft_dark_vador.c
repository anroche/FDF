#include "fdf.h"
#include "minilibx_macos/mlx.h"

t_indication	ft_dark_vador(t_indication id)
{
	void *img;
	img = mlx_new_image(id.mlx, 2560, 1440);
	mlx_put_image_to_window(id.mlx, id.win, img, 0, 0);
	return(id);
}
