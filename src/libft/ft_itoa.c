/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:50:44 by rbenjami          #+#    #+#             */
/*   Updated: 2013/11/20 11:50:54 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_ilen(int i)
{
	size_t	len;

	len = 0;
	if (i < 0)
		len++;
	while ((i /= 10))
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*nb;
	size_t	neg;
	size_t	i;

	nb = (char *)malloc(sizeof(char) * ft_ilen(n) + 1);
	if (n == 0)
	{
		nb[0] = '0';
		return (nb);
	}
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	i = ft_ilen(n);
	nb[i + 1] = '\0';
	if (neg)
	{
		nb[0] = '-';
		i++;
	}
	while (n != 0)
	{
		nb[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (nb);
}
