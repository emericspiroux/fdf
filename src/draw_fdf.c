/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 11:33:56 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 16:07:47 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw_fdf.h"

static void		draw_hid(t_env *e, t_line *li)
{
	int	i;

	i = 1;
	while (i < 200)
	{
		mlx_pixel_put(e->mlx, e->win, li->x, li->y + i, 0);
		i++;
	}
}

static void		loop_line_y(t_line *li, point *b, t_env *e)
{
	while (li->y <= b->y)
	{
		if (li->d >= 0)
		{
			li->x += li->xincr;
			li->d += li->aincr;
		}
		else
			li->d += li->bincr;
		mlx_pixel_put(e->mlx, e->win, li->x, li->y, 10341716);
				draw_hid(e, li);
		li->y += 1;
	}
}

static void		loop_line_x(t_line *li, point *b, t_env *e)
{
	while (li->x <= b->x)
	{
		if (li->d >= 0)
		{
			li->y += li->yincr;
			li->d += li->aincr;
		}
		else
			li->d += li->bincr;
		mlx_pixel_put(e->mlx, e->win, li->x, li->y, 10341716);
		draw_hid(e, li);
		li->x++;
	}
}

void 			line(point a, point b, t_env *e)
{
	t_line	li;

	if (abs(b.x - a.x) < abs(b.y - a.y))
	{
		xchangpoint(&a, &b, 'y');
		applicoord(&a, &b, &li, 'y');
		mlx_pixel_put(e->mlx, e->win, li.x, li.y, 10341716);
		li.y = a.y + 1;
		loop_line_y(&li, &b, e);

	}
	else
	{
		xchangpoint(&a, &b, 'x');
		applicoord(&a, &b, &li, 'x');
		mlx_pixel_put(e->mlx, e->win, li.x, li.y, 10341716);
		li.x = a.x + 1;
		loop_line_x(&li, &b, e);
	}
}
