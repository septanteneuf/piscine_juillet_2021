/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:47:53 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:31 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <math.h>

// int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(5, 5));
// 	printf("%f\n", pow(5, 5));
// }

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (i);
}
