/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_keycode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:24:56 by fanno             #+#    #+#             */
/*   Updated: 2016/03/12 15:24:57 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"

void	check_keycode1(int keycode, t_env *e)
{
	if (keycode == 53 || keycode == 123 || keycode == 124 ||
			keycode == 125 || keycode == 126 || keycode == 12 ||
			keycode == 13 || keycode == 0 || keycode == 1 ||
			keycode == 78 || keycode == 69 || keycode == 6 ||
			keycode == 7 || keycode == 8 || keycode == 9 ||
			keycode == 18 || keycode == 19 || keycode == 20)
		mlx_clear_window(e->mlx, e->win);
}

void	check_keycode2(int keycode, t_env *e)
{
	if (keycode == 53 || keycode == 123 || keycode == 124 ||
			keycode == 125 || keycode == 126 || keycode == 12 ||
			keycode == 13 || keycode == 0 || keycode == 1 ||
			keycode == 78 || keycode == 69 || keycode == 6 ||
			keycode == 7 || keycode == 8 || keycode == 9 ||
			keycode == 18 || keycode == 19 || keycode == 20)
		expose_hook(e);
}
