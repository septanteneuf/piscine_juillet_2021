/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:53:52 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:41:18 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putnb(int a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)
{
	int	index;

	index = '/';
	while (++index <= '9')
	{
		ft_putnb(index);
	}
}

/* sinon vachement plus simple */
// void	ft_print_reverse_alphabet(void)
// {
// 	write(1, "123456789", 9);
// }

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
