/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:14:50 by santonie          #+#    #+#             */
/*   Updated: 2022/05/17 14:49:38 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int		nbr;
	long	sign;

	nbr = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{	
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("++++--++-2147483647"));
// 	printf("%f\n", atoi("++++--++-2147483647"));
// }
