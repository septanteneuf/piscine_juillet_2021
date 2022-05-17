/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:18:15 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:41:17 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	unsigned int	index;

	index = '{';
	while (--index >= 'a')
	{
		ft_putchar(index);
	}
}

/* sinon vachement plus simple */
// void	ft_print_reverse_alphabet(void)
// {
// 	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
// }

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
