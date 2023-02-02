/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:16:02 by skaragul          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:08 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	args;

	va_start(args, str);
	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] == '%')
			size += ft_format(args, str, ++i);
		else
			size += ft_chr(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}
