/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathgeo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 11:37:11 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/17 11:13:12 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathgeo.h"

void		xchangeint(int *x, int *y)
{
	int	t;

	t = *x;
	*x = *y;
	*y = t;
}

int 		abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

void		xchangpoint(point *a, point *b, char letter)
{
	if (letter == 'y' || letter == 'Y')
	{
		if (a->y > b->y)
		{
			xchangeint(&a->x, &b->x);
			xchangeint(&a->y, &b->y);
		}
	}
	else if (letter == 'x' || letter == 'X')
	{
		if (a->x > b->x)
		{
			xchangeint(&a->x, &b->x);
			xchangeint(&a->y, &b->y);
		}
	}
}

void		applicoord(point *a, point *b, t_line *li, char letter)
{
	if (letter == 'x' || letter == 'X')
	{
		li->yincr = b->y > a->y ? 1 : -1;
		li->dx = b->x - a->x;
		li->dy = abs(b->y - a->y);
		li->d = 2 * li->dy - li->dx;
		li->aincr = 2 * (li->dy - li->dx);
		li->bincr = 2 * li->dy;
	}
	else
	{
		li->xincr = b->x > a->x ? 1 : -1;
		li->dy = b->y - a->y;
		li->dx = abs(b->x - a->x);
		li->d = 2 * li->dx - li->dy;
		li->aincr = 2 * (li->dx - li->dy);
		li->bincr = 2 * li->dx;
	}
	li->x = a->x;
	li->y = a->y;
}
