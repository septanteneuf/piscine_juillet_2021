/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:25:09 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 15:02:24 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	unsigned int	index;

	index = 'a';
	while (index <= 'z')
	{
		ft_putchar(index);
		index++;
	}
}

/* sinon vachement plus simple */
// void	ft_print_reverse_alphabet(void)
// {
// 	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
// }

// int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }