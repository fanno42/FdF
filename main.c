/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:25:20 by fanno             #+#    #+#             */
/*   Updated: 2016/03/12 15:25:22 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"
#include <stdio.h>

int		expose_hook(t_env *e)
{
	read_file(e);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	printf("key = %d\n", keycode);
	check_keycode1(keycode, e);
	if (keycode == 53)
		exit(0);
	if (keycode == 124)
		e->origine_x += 50;
	if (keycode == 123)
		e->origine_x -= 50;
	if (keycode == 126)
		e->origine_y -= 50;
	if (keycode == 125)
		e->origine_y += 50;
	if (keycode == 12)
		e->y -= 1;
	if (keycode == 13)
		e->y += 1;
	if (keycode == 0)
		e->z -= 1;
	if (keycode == 1)
		e->z += 1;
	key_hook_2(keycode, e);
	return (0);
}

int		key_hook_2(int keycode, t_env *e)
{
	if (keycode == 69)
	{
		if (e->w > 0.2)
			e->w -= 0.2;
	}
	if (keycode == 78)
		e->w += 0.2;
	if (keycode == 6)
		e->h -= 0.1;
	if (keycode == 7)
		e->h += 0.1;
	if (keycode == 8)
		e->h -= 0.5;
	if (keycode == 9)
		e->h += 0.5;
	change_view(keycode, e);
	return (0);
}

int		main(int argc, char **argv)
{
	t_env	e;
	int		fd;

	set_variables(&e);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			perror(argv[1]);
			exit(0);
		}
		get_tab(fd, &e);
		e.mlx = mlx_init();
		if (e.mlx == NULL)
			exit(0);
		e.win = mlx_new_window(e.mlx, 1500, 1200, "42");
		mlx_key_hook(e.win, key_hook, &e);
		mlx_expose_hook(e.win, expose_hook, &e);
		mlx_loop(e.mlx);
	}
	else
		write(1, "usage : ./fdf file_name\n", 24);
	return (0);
}
