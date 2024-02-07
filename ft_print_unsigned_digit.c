/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_digit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:31:09 by mbamatra          #+#    #+#             */
/*   Updated: 2024/01/29 18:39:44 by mbamatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_digit(unsigned int num)
{
	int	len;

	len = 0;
	if (num >= 10)
		len += ft_print_unsigned_digit(num / 10);
	len += ft_characters(num % 10 + '0');
	return (len);
}
