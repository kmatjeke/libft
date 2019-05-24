/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:21:54 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/24 10:34:18 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	i = 0;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (ptr_src < ptr_dst)
	{
		while (i <= len)
		{
			ptr_dst[len - i] = ptr_src[len - i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*(ptr_dst++) = *(ptr_src++);
			len--;
		}
	}
	return (dst);
}
