/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AYOUB BELLA <ayoub.bella@student.1337.ma>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:32:21 by AYOUB BELLA       #+#    #+#             */
/*   Updated: 2025/07/26 14:33:27 by AYOUB BELLA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv(int x)
{
	char	c;

	c = x + '0';
	ft_putchar(c);
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	if (n == 2)
	{
		a = 0;
		while (a < 9)
		{
			b = a + 1;
			while (b < 10)
			{
				ft_conv(a);
				ft_conv(b);
				if (!(a == 8 && b == 9))
				{
					write(1, ", ", 2);
				}
				else
					ft_putchar('\n');
				b++;
			}
			a++;
		}
	}
}
