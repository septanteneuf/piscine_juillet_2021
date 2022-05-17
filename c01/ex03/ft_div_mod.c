/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:55:52 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:43:20 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	int		div;
// 	int		mod;
// 	char	c;

// 	a = 10;
// 	b = 3;
// 	ft_div_mod(a, b, &div, &mod);
// 	c = div + 48;
// 	write(1, &c, 1);
// 	write(1, "\n", 1);
// 	c = mod + 48;
// 	write(1, &c, 1);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
