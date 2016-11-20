/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:08:16 by fanno             #+#    #+#             */
/*   Updated: 2015/11/24 11:55:43 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*i1;
	char	*i2;

	i1 = dest;
	i2 = (char *)src;
	while (*i1 != '\0')
	{
		i1++;
	}
	while (*i2 != '\0')
	{
		*i1 = *i2;
		i1++;
		i2++;
	}
	*i1 = '\0';
	return (dest);
}
