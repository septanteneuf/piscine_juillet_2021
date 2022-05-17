/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 08:43:56 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:49 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <math.h>
// #include <stdio.h>

// int	ft_is_prime(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(11));
// 	printf("%d\n", ft_is_prime(20));
// 	printf("%d\n", ft_is_prime(450));
// 	printf("%d\n", ft_is_prime(1009));
// 	printf("%d\n", ft_is_prime(17859));
// }

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
