/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:59:55 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/21 12:44:50 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
   char *str = "Helloworld";
   char *result;
   char *test;

   result = strdup(str);
   test = ft_strdup(str);
   printf("The string : %s\n\n", result);
   printf("The string : %s\n\n", test);
   return 0;
}
