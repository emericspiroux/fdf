/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 11:34:03 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/28 16:09:23 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	t_env	e;

	e.decleft = 550;
	e.dectop  = 100;
	e.ord	  = 50;
	e.abso	  = 50;
	if ((argc != 2) || (read_file(argv[1], &e)))
		return (EXIT_FAILURE);
	if (!(e.mlx = mlx_init()))
		return (EXIT_FAILURE);
	if (!(e.win = mlx_new_window(e.mlx, 2660, 1440, "FDF Viewer")))
		return (EXIT_FAILURE);
	mlx_key_hook(e.win, exit_key_hook, &e);
	mlx_expose_hook(e.win, map_expose, &e);
	mlx_loop_hook(e.mlx, exit_key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}

unsigned int	lentab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		map_expose(t_env *e)
{
	enspoint	p;
	inc			t;

	t.i = 0;
	while (t.i < e->longu && !(t.j = 0))
	{
		while (t.j < e->longmap[t.i])
		{
			iso_a(&p.a, t.i, t.j, e);
			if (t.j < e->longmap[t.i] - 1)
			{
				iso_b(&p.b, t.i, t.j, e);
				line(p.a, p.b, e);
			}
			if (t.i < e->longu &&  t.j < e->longmap[t.i + 1])
			{
				iso_c(&p.c, t.i, t.j, e);
				line(p.a, p.c, e);
			}
			++t.j;
		}
		t.i++;
	}
	return (0);
}
