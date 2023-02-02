/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_services.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:52:34 by skaragul          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:15 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chr(int c)
{
	return (write(1, &c, 1));
}

int	ft_uns(unsigned int n)
{
	if (n > 9)
		return (ft_uns(n / 10) + ft_chr(n % 10 + '0'));
	return (ft_chr(n + '0'));
}

int	ft_str(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_str("(null)"));
	while (s[i])
		ft_chr(s[i++]);
	return (i);
}

int	ft_nbr(int n)
{
	if (n == -2147483648)
		return (ft_str("-2147483648"));
	if (n < 0)
		return (ft_chr('-') + ft_nbr(-n));
	if (n > 9)
		return (ft_nbr(n / 10) + ft_chr(n % 10 + 48));
	return (ft_chr(n + 48));
}
