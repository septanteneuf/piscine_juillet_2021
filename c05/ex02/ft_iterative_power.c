/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 12:16:52 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:25 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <math.h>

// int	ft_iterative_power(int nb, int power);

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(5, 5));
// 	printf("%f\n", pow(5, 5));
// }

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 & nb == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
