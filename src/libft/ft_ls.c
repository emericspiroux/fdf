/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 12:08:56 by rbenjami          #+#    #+#             */
/*   Updated: 2013/11/28 12:08:58 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include "libft/libft.h"

int main(int argc, char const *argv[])
{
	struct dirent	*lecture;
	DIR				*rep;
	char			*name;
	size_t			i;

	if (argc == 1)
	{
		rep = opendir(".");
		while ((lecture = readdir(rep)))
		{
			name = lecture->d_name;
			if (name[0] != '.')
			{
				ft_putstr(name);
				ft_putchar('\t');
			}
		}
		closedir(rep);
	}
	else
	{
		i = 0;
		while (!argv[i])
		{
			i++;
		}
	}

	return (0);
}
