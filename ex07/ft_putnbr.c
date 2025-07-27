/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AYOUB BELLA <ayoub.bella@student.1337.ma>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:23:28 by AYOUB BELLA       #+#    #+#             */
/*   Updated: 2025/07/26 14:31:42 by AYOUB BELLA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_rec(int nb)
{
	if (nb >= 10)
		ft_putnbr_rec(nb / 10);
	ft_putchar('0' + (nb % 10));
}

/* -2147483648 */
void	ft_putnbr(int nb)
{
	ft_putchar('"');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		ft_putchar('"');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_putnbr_rec(nb);
	ft_putchar('"');
}
