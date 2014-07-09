/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:50:44 by rbenjami          #+#    #+#             */
/*   Updated: 2013/11/20 11:50:54 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	i = 0;
	k = 0;
	while (ft_isspace(s[i]))
		i++;
	if (i == j)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	j--;
	while (ft_isspace(s[j]))
		j--;
	j -= i - 1;
	str = malloc(sizeof(char) * j + 1);
	if (!str)
		return (NULL);
	while (j)
	{
		str[k] = s[i + k];
		k++;
		j--;
	}
	str[k] = '\0';
	return (str);
}
