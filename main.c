/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/22 14:42:56 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
   int var1 = 'd';
   int var2 = 'Y';
   int var3 = '\t';
   int var4 = ' ';
    
   if (ft_isalpha(var1))
   {
      printf("var1 = |%c| is an alphabet\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }
   if (ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }
   if (ft_isalpha(var3))
   {
      printf("var3 = |%c| is an alphabet\n", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }
   
   if (ft_isalpha(var4))
   {
      printf("var4 = |%c| is an alphabet\n", var4 );
   }
   else
   {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
   return(0);
}
