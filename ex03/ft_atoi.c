/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shryuman <harushota0726@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:56:59 by shryuman          #+#    #+#             */
/*   Updated: 2025/03/20 23:17:09 by shryuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>

// int ft_atoi(char *str);

// int main()
// {
//     printf("%d\n", ft_atoi(" ---+--+1234ab567")); // → -1234
//     printf("%d\n", ft_atoi("   42"));             // → 42
//     printf("%d\n", ft_atoi("--+--1234"));         // → 1234
//     printf("%d\n", ft_atoi("  -00123xyz"));       // → -123
//     printf("%d\n", ft_atoi("abc123"));            // → 0
//     return 0;
// }
