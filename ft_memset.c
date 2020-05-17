/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:26:51 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/23 12:31:22 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_byte	*ptr;
	size_t	i;

	i = 0;
	ptr = (t_byte*)b;
	while (i < len)
	{
		*ptr = (t_byte)c;
		ptr++;
		i++;
	}
	return (b);
}
