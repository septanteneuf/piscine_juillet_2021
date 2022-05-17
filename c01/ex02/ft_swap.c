/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:44:36 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:43:09 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	int		x;
// 	char	d;

// 	a = 2;
// 	b = 3;
// 	x = 0;
// 	ft_swap(&a, &b);
// 	d = a + 48;
// 	write(1, &d, 1);
// 	write(1, "\n", 1);
// 	d = b + 48;
// 	write(1, &d, 1);
// }

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
