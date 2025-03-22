/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shryuman <harushota0726@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:19:08 by shryuman          #+#    #+#             */
/*   Updated: 2025/03/20 17:46:03 by shryuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[10] = "ryuman";
// 	char test2[20] = "Shota";

// 	printf("文字列の長さは: %d\n",ft_strlen(test1));
// 	printf("文字列の長さは: %d\n",ft_strlen(test2));
// }
