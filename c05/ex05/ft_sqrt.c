/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:15:00 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:50:43 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <math.h>
// #include <stdio.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(100));
// 	printf("%f\n", sqrt(100));
// }

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while ((i * i) < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
