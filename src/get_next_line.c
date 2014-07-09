/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:40:22 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/18 15:27:32 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlentc(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static char		*ft_strcpytc(char *dest, char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&src[i + 1]);
}

static int		ft_end_line(char **save, char **line)
{
	unsigned int	len;

	if (*save)
	{
		len = ft_strlen((char *)save);
		if (!(*line = (char *) malloc(sizeof(char) * len + 1)))
			return (-1);
		*line = *save;
		*save = NULL;
		return (0);
	}
	else
		return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char		*save;
	static int		ret = 1;
	char			buff[BUFF_SIZE + 1];
	char			*new;

	if (ret)
		new = (save) ? ft_strdup(save) : ft_strnew(BUFF_SIZE);
	else
		return (ft_end_line(&save, line));
	while (!ft_strchr(new, '\n'))
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) > 0)
			new = ft_strjoin(new, buff);
		else
			return (ret);
	}
	if (!(*line = (char *)malloc(sizeof(char) * ft_strlentc(new, '\n') + 1)))
		return (-1);
	save = ft_strdup(ft_strcpytc(*line, new, '\n'));
	if (new)
		free(new);
	return (1);
}
