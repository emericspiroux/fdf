/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathgeo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 11:32:23 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 15:36:36 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHGEO_H
# define MATHGEO_H
# include "struct.h"

/*
** Change beetween x and y.
*/
void 	xchangint(int *x, int *y);

/*
** Give the absolute of parameter.
*/
int 	abs(int i);

/*
** Change beetween a and b, y or x depends of letter (y Y or x X) used.
*/
void	xchangpoint(point *a, point *b, char letter);

/*
** Give start and end coordonate for the line.
*/
void	applicoord(point *a, point *b, t_line *li, char letter);

#endif /* !MATHGEO_H */
