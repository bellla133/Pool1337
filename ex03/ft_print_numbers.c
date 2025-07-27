/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AYOUB BELLA <ayoub.bella@student.1337.ma>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 07:15:11 by AYOUB BELLA       #+#    #+#             */
/*   Updated: 2025/07/26 07:19:51 by AYOUB BELLA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '1';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
