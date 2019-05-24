/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/24 11:13:11 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcd", 6);
   memcpy(str2, "abcd", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0)
   {
      printf("str2 is less than str1");
   }else if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else
   {
	   printf("str1 is equal to str2");
   }
   return(0);
}
