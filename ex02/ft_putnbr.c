/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shryuman <harushota0726@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:17 by shryuman          #+#    #+#             */
/*   Updated: 2025/03/20 17:45:48 by shryuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar('0' + (num % 10));
}
// int	main(void)
// {
// 	ft_putnbr(123);
// 	ft_putchar('\n');

// 	ft_putnbr(-456);
// 	ft_putchar('\n');

// 	ft_putnbr(0);
// 	ft_putchar('\n');

// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// }