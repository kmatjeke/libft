/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:06:01 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/20 10:58:13 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int size;

	size = 0;
	while (src[size])
		size++;
	if(!(dest = (char *) malloc(sizeof(char) * (size + 1))))
		return NULL;
	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
