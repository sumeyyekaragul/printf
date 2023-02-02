/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_services2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:12:38 by skaragul          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:18 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int c, char s)
{
	return (ft_hex(c, s));
}

int	ft_hex(unsigned long long c, char s)
{
	if (c > 15)
		return (ft_hex(c / 16, s) + ft_hex(c % 16, s));
	if (s == 'x')
		return (ft_chr("0123456789abcdef"[c]));
	return (ft_chr("0123456789ABCDEF"[c]));
}

int	ft_ptr(unsigned long long c)
{
	int	size;

	size = 0;
	size += ft_chr('0') + ft_chr('x') + ft_hex(c, 'x');
	return (size);
}
