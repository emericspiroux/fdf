/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iso.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 12:42:59 by espiroux          #+#    #+#             */
/*   Updated: 2014/07/09 19:30:22 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISO_H
# define ISO_H
# include "struct.h"
# include "libft.h"
# define DECHAUT 100
# define DECGAUC 550
# define ABS 5
# define ORD 5
# define HAU 5

/*
** Apply Isometrique coordonate of a, b or c point structure.
*/
void	iso_a(point *a, int i, int j, t_env *e);
void	iso_b(point *b, int i, int j, t_env *e);
void	iso_c(point *c, int i, int j, t_env *e);

#endif /* !ISO_H */
