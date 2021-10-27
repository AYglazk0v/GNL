/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <gtaggana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:04:46 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/27 21:41:57 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strchr(char *string, int symbol)
{
	if (!string)
		return (NULL);
	while (*string)
	{
		if (*string == (char)symbol)
			return (string);
		string++;
	}
	if (*string == (char)symbol)
		return (string);
	return (NULL);
}
