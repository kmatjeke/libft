/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/23 09:56:25 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
   int var1 = 'm';
   int var2 = ',';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }
   
   if( ft_isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }
   
   if( ft_isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }
   
   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }
   
   return(0);
}   
