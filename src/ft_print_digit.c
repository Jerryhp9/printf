/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:26:49 by jhor              #+#    #+#             */
/*   Updated: 2025/02/14 11:26:49 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_print_digit(long num, char *base)
{
	int		base_len;
	long	n;
	int count;

	count = 0;
	base_len = ft_strlen(base);
	n = num;
	if (n < 0)
	{
		count += ft_print_char('-');
		n = (n * -1);
	}
	if (n >= base_len)
		ft_print_digit(n / base_len, base);
	// ft_print_char(n % base_len - '0') - it does not handle the mapping correctly
	count += ft_print_char((base[n % base_len]));
	return (n);
}

// int main()
// {
// 	long nbr = 1234;
// 	char *basee = "0123456789";
// 	ft_print_digit(nbr, basee);
// }