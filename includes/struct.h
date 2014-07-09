/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 11:34:19 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/28 15:57:29 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

/*
**Struct of one point with x and y coord
*/
typedef struct	s_point{
	int	x;
	int	y;
}				point;

/*
**Struct of many point with x and y coord
*/
typedef struct	s_s_point{
	point	a;
	point	b;
	point	c;
}				enspoint;

/*
**Struct of the environnement
**	mlx and win are for the MinilibX
**	map, larg and long are for saving map
*/
typedef struct	s_env{
	void			*mlx;
	void			*win;
	char			***map;
	unsigned int	*longmap;
	unsigned int	larg;
	unsigned int	longu;
	double	 		decleft;
	double	 		dectop;
	double	 		posX;
	double	 		posY;
	double	 		lookX;
	double			lookY;
	double			abso;
	double			ord;
}					t_env;

/*
** Some Var for draw line
*/
typedef struct	s_line{
	 int	d;
	 int	dx;
	 int	dy;
	 int	aincr;
	 int	bincr;
	 int	xincr;
	 int	yincr;
	 int	x;
	 int	y;
}				t_line;

/*
** Some Var for incrementation of draw line
*/
typedef struct	s_inc{
	unsigned int	i;
	unsigned int	j;
}				inc;

#endif /* !FDF_H */
