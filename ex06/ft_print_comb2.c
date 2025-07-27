/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AYOUB BELLA <ayoub.bella@student.1337.ma>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 08:10:29 by AYOUB BELLA       #+#    #+#             */
/*   Updated: 2025/07/26 13:29:29 by AYOUB BELLA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		ft_putchar('0');
		ft_putchar(c);
	}
	else
	{
		c = (n / 10) + 48;
		ft_putchar(c);
		c = (n % 10) + 48;
		ft_putchar(c);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_convert(a);
			ft_putchar(' ');
			ft_convert(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
			}
			else
			{
				ft_putchar('\n');
			}
			b++;
		}
		a++;
	}
}
