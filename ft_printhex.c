/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:53:48 by mbamatra          #+#    #+#             */
/*   Updated: 2024/01/28 20:46:51 by mbamatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int num, char hex_case)
{
	int	len;

	len = 0;
	if (num >= 0 && num <= 9)
		len += ft_characters(num + '0');
	else if (num >= 10 && num <= 15 && hex_case == 'x')
		len += ft_characters(num - 10 + 'a');
	else if (num >= 10 && num <= 15 && hex_case == 'X')
		len += ft_characters(num - 10 + 'A');
	return (len);
}

int	ft_printhex(unsigned long num, char hex_case)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_printhex(num / 16, hex_case);
		len += ft_printhex (num % 16, hex_case);
	}
	else
		len += ft_hex(num, hex_case);
	return (len);
}
// int main(void)
// {
// 	printf("%x", printhex(312, 'x'));
// }

// int ft_characters(int c)
// {
//     write(1, &c, 1);
//     return (1);
// }

// int ft_print_hex(unsigned int num, char hex_case)
// {
//     int len;

//     char *hex_lower;
//     char *hex_upper;

//     hex_upper = "ABCDEF";
//     hex_lower= "abcdef";
//     len = 0;
//     if (num >= 0 && num <= 9)
//         len += ft_characters(num + '0');
//     else if (num >= 10 && num <= 15 && hex_case == 'x')
//         len += ft_characters(num - 10 + 'a');
//     else if (num >= 10 && num <= 15 && hex_case == 'X')
//         len += ft_characters(num - 10 + 'A');
//     return (len);
// }

// int ft_printhex(unsigned long num, char hex_case)
// {
//     int len;

//     len = 0;
//     if (num >= 16)
//     {
//         len += ft_printhex(num / 16, hex_case);
//         len += ft_print_hex(num % 16, hex_case);
//     }
//     else
//         len += ft_print_hex(num, hex_case);
//     return (len);    
// }

// int main(void)
// {
//     printf("%x", ft_printhex(123, 'x'));
// }