/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:51:53 by mbamatra          #+#    #+#             */
/*   Updated: 2024/01/28 20:47:42 by mbamatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		count += write(1, "0x0", 3);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_printhex((unsigned long)ptr, 'x');
	return (count);
}
