/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:04:49 by luisfern          #+#    #+#             */
/*   Updated: 2022/04/19 10:44:56 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_format(char c, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printnbr(int n);
int		ft_printstr(char *s);
int		ft_printuns(unsigned int n);
int		ft_printhexa(unsigned int n, char *base);
int		ft_printpointer(unsigned long long ptr);
int		count_num(int n);
int		count_unsigned(unsigned int n);
char	*ft_utoa(unsigned int n);

#endif