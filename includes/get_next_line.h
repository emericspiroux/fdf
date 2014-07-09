/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:40:44 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 15:28:09 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <libft.h>
# include <string.h>
# define BUFF_SIZE 21

int	get_next_line(int const fd, char ** line);

#endif /* !GET_NEXT_LINE_H */
