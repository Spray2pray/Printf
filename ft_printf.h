/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:59:14 by mbamatra          #+#    #+#             */
/*   Updated: 2024/01/28 20:57:37 by mbamatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_characters(int c);
int		ft_print_unsigned_digit(unsigned int num);
int		ft_printdigit(int num);
int		ft_printhex(unsigned long num, char hex_case);
int		ft_printpointer(void *ptr);
int		ft_printstring(char *str);
int		ft_formatspecifier(va_list list, const char str);
int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);

#endif