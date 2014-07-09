/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fdf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 11:34:31 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 15:30:41 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_FDF_H
# define DRAW_FDF_H
# include "struct.h"
# include "mathgeo.h"
# include "mlx.h"
# include "iso.h"

/*
** Draw line from a to b with e->map heigh
*/
void	line(point a, point b, t_env *e);

#endif /* !DRAW_FDF_H */
