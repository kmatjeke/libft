/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:03:00 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/21 12:35:53 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (*src != '\0' || i < len)
	{
		if (*src != '\0' && i < len)
		{
			*dst++ = *src++;
		}
		else
			*dst++ = '\0';
		i++;
	}
	return (dst);
}
