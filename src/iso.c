/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iso.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 12:39:41 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/28 16:02:33 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iso.h"

void	iso_a(point *a, int i, int j, t_env *e)
{
	unsigned int	za;

	za = ft_atoi(e->map[i][j]);
	a->x = - ( i * e->ord / 2 ) + ( j * e->ord / 2 ) + e->decleft;
	a->y = (e->abso / 2 + ( i * e->abso / 2 ) + ( j * e->abso / 2)) / 2 - za + e->dectop;
}

void	iso_b(point *b, int i, int j, t_env *e)
{
	unsigned int	zb;
	unsigned int	y;

	zb = ft_atoi(e->map[i][j + 1]);
	b->x = - ( i * e->ord / 2 ) + ((j + 1) * e->ord / 2 ) + e->decleft;
	y = (e->abso / 2 + ( i * e->abso / 2 ) + ((j + 1) * e->abso  / 2)) / 2;
	b->y = y - zb + e->dectop;
}

void	iso_c(point *c, int i, int j, t_env *e)
{
	unsigned int	zc;
	unsigned int	y;

	zc = ft_atoi(e->map[i + 1][j]);
	c->x = - ( (i + 1) * e->ord / 2 ) + ( j * e->ord / 2 ) + e->decleft;
	y = (e->abso / 2 + ((i + 1) * e->abso / 2 ) + ( j * e->abso / 2)) / 2;
	c->y = y - zc + e->dectop;
}
