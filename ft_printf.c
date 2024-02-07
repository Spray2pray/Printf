/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:04:56 by mbamatra          #+#    #+#             */
/*   Updated: 2024/01/29 19:17:21 by mbamatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatspecifier(va_list list, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (c == 'c')
		len += ft_characters(va_arg(list, int));
	else if (c == 's')
		len += ft_printstring(va_arg(list, char *));
	else if (c == 'p')
		len += ft_printpointer(va_arg(list, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printdigit(va_arg(list, int));
	else if (c == 'u')
		len += ft_print_unsigned_digit(va_arg(list, unsigned long));
	else if (c == 'x' || c == 'X')
		len += ft_printhex(va_arg(list, unsigned int), c);
	else if (c == '%')
		len += ft_characters('%');
	else
		len += ft_characters(va_arg(list, int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (!(ft_strchr("udixXcsp%", str[i])))
				i++;
			len += ft_formatspecifier(ap, str[i]);
		}
		else
			len += ft_characters(str[i]);
		i++;
	}
	va_end (ap);
	return (len);
}
