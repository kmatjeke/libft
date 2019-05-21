/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/21 14:59:12 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main () {
   const char haystack[40] = "This is the mother of all strings";
   const char needle[10] = "point";
   char *ret;
   char *test;

   ret = strstr(haystack, needle);
   test = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   printf("The substring is: %s\n", test);
   
   return(0);
}
