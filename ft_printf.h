/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:24:11 by jhor              #+#    #+#             */
/*   Updated: 2025/02/14 11:24:11 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_print_char(char c);
size_t	ft_strlen(const char *str);
int		ft_print_digit(long num, char *base);
int		ft_print_str(char *s);
int		ft_print_lower_hexa(int nbr);
int		ft_print_upper_hexa(int nbr);
int		ft_print_pointer(void *num);
int		format_specifiers(char format, va_list *list);
int		ft_printf(const char *format, ...);

#endif