/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:17:15 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:11 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-7));
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(12));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(6));
// 	printf("%d\n", ft_iterative_factorial(7));
// 	printf("%d\n", ft_iterative_factorial(8));
// 	printf("%d\n", ft_iterative_factorial(9));
// 	printf("%d\n", ft_iterative_factorial(10));
// }

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		i = i + 1;
		result = result * i;
	}
	return (result);
}
