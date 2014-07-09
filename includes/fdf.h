/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 11:34:19 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 15:30:38 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <unistd.h>
# include <stdlib.h>
# include "fdf.h"
# include "draw_fdf.h"
# include "mlx.h"
# include "libft.h"
# include "struct.h"
# include "hook.h"
# include "readfile.h"
# include "iso.h"

/*
** Give lenght of tab in tab.
*/
unsigned int	lentab(char **tab);

/*
** Apply display in MLX of the map variable stock in environement variable.
*/
int				map_expose(t_env *e);

#endif /* !FDF_H */
