/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 11:37:19 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 16:11:01 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READFILE_H
# define READFILE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include "get_next_line.h"
# include "struct.h"
# include "mathgeo.h"
# include "libft.h"

/*
** Read a file and give the map to map environnement variable.
*/
int				read_file(char *, t_env *);

/*
** Count how many square are present in the line.
*/
unsigned int	read_countcase(const char *, int);

/*
** Fonction Creat for testing record of map in other fonction.
*/
void			display_map(t_env *);

#endif /* !READFILE_H*/
