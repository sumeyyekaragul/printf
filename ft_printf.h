/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:22:40 by skaragul          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:12 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);

int	ft_format(va_list args, const char *str, int i);

int	ft_uns(unsigned int n);

int	ft_str(const char *s);

int	ft_nbr(int n);

int	ft_hex(unsigned long long c, char s);

int	ft_chr(int c);

int	ft_ptr(unsigned long long c);

int	ft_x(unsigned int c, char s);
#endif
