/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:21:34 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 16:58:11 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readfile.h"

int				read_file(char *file, t_env *e)
{
	int		fd;
	int		i;
	char	*line;

	e->map = (char ***) malloc(sizeof(char) * 10000);
	e->longmap = (unsigned int *) malloc(sizeof(unsigned int) * 10000);
	i = 0;
	if (!((fd = open(file, O_RDONLY)) > 0))
	{
		perror(file);
		strerror(fd);
		close(fd);
		return (-1);
	}
	while (get_next_line(fd, &line) > 0)
	{
		e->longmap[i] = read_countcase(line, ' ');
		e->map[i] = ft_strsplit((const char *)line, ' ');
		i++;
		free(line);
	}
	e->longmap[i + 1] = 0;
	e->longu = i;
	return (0);
}

unsigned int	read_countcase(const char *str, int c)
{
	int				count;
	unsigned int	line;
	unsigned int	i;

	count = 0;
	i = 0;
	line = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && count != 1)
		{
			line++;
			count = 1;
		}
		else if (str[i] == c)
			count = 0;
		i++;
	}
	return (line);
}

/*
**Display in Terminal the file read for test.
*/
void			display_map(t_env *e)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < e->longu)
	{
		while (j < e->larg)
		{
			ft_putnbr(ft_atoi(e->map[i][j]));
			ft_putchar('\t');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
