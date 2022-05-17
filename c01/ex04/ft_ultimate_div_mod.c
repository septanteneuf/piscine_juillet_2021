/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:26:45 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:43:45 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	char	c;

// 	a = 48;
// 	b = 7;
// 	c = a + 48;
// 	ft_ultimate_div_mod(&a, &b);
// 	write(1, &c, 1);
// 	c = b + 48;
// 	write(1, "\n", 1);
// 	write(1, &c, 1);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
