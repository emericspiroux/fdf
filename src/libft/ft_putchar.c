/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:01:32 by rbenjami          #+#    #+#             */
/*   Updated: 2013/11/19 11:25:04 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 *	ft_putchar == putchar
 */
/*
int	ft_putchar(int c)
{
	if (c >= 0 && c <= 255)
	{
		write (1, &c, 1);
		return (c);
	}
	else if (c < 0)
	{
		c = c * -1;
		if (c >= 256)
		{
			if (c % 256 == 0)
				return (0);
			c = c % 256;
		}
		c = c + 256 - 2 * c;
		if (c >= 0 && c <= 255)
			write (1, &c, 1);
	}
	else if (c >= 256)
		c = c % 256;
	return (c);
}
*/
