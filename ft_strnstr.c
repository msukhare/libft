/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:58:17 by msukhare          #+#    #+#             */
/*   Updated: 2017/11/11 15:52:37 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == need[j] && hay[i] && need[j]
				&& (i + j) < len)
			j++;
		if (need[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (NULL);
}
