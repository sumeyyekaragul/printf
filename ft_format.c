/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:26:47 by skaragul          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:03 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char *str, int i)
{
	int	size;

	size = 0;
	if (str[i] == 'c')
		size += ft_chr(va_arg(args, int));
	if (str[i] == 's')
		size += ft_str(va_arg(args, char *));
	if (str[i] == 'd' || str[i] == 'i')
		size += ft_nbr(va_arg(args, int));
	if (str[i] == 'u')
		size += ft_uns(va_arg(args, unsigned int));
	if (str[i] == 'x' || str[i] == 'X')
		size += ft_x(va_arg(args, unsigned int), str[i]);
	if (str[i] == 'p')
		size += ft_ptr(va_arg(args, unsigned long long));
	if (str[i] == '%')
		size += ft_chr('%');
	return (size);
}
