/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:00:30 by espiroux          #+#    #+#             */
/*   Updated: 2014/07/09 19:28:56 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook.h"

int		mouse_hook(int button, int x, int y, t_env *e)
{
	if (button == 1)
		mlx_string_put(e->mlx, e->win, x, y, 0x55FF00, "ICI");
	return (0);
}

int		exit_key_hook(int keycode, t_env *e)
{
	if (keycode == 65307)
		exit(0);
	if (keycode == 65364)
		e->decleft -= 5;
	if (keycode == 65361)
		e->decleft += 5;
	return (0);
}
