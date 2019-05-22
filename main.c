/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/22 16:00:06 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
   int var1 = ' ';
   int var2 = '\t';
   int var3 = '7';
   int var4 = 'x';
    
   if(ft_isalnum(var1))
   {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }
   if(ft_isalnum(var2))
   {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }
   if(ft_isalnum(var3))
   {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   }
   else
   {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }
   if(ft_isalnum(var4))
   {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   }
   else
   {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }
   return(0);
}
