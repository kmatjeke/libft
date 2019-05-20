/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:39:03 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/20 12:45:21 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *str);
char	*ft_strcat(char *s1, const char *s2);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *str);
#endif
