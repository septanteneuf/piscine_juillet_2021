/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:10:19 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:19 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(-79));
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(2));
// 	printf("%d\n", ft_recursive_factorial(12));
// 	printf("%d\n", ft_recursive_factorial(3));
// 	printf("%d\n", ft_recursive_factorial(4));
// 	printf("%d\n", ft_recursive_factorial(5));
// 	printf("%d\n", ft_recursive_factorial(6));
// 	printf("%d\n", ft_recursive_factorial(7));
// 	printf("%d\n", ft_recursive_factorial(9));
// 	printf("%d\n", ft_recursive_factorial(10));
// 	printf("%d\n", ft_recursive_factorial(11));
// }

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
