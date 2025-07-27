/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AYOUB BELLA <ayoub.bella@student.1337.ma>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 07:20:37 by AYOUB BELLA       #+#    #+#             */
/*   Updated: 2025/07/26 07:26:30 by AYOUB BELLA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else if (n >= 0)
	{
		ft_putchar('P');
	}
}
