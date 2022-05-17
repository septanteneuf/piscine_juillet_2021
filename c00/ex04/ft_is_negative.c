/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:31:10 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:41:15 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putnb(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putnb('N');
	}
	else
	{
		ft_putnb('P');
	}
}

// int	main(void)
// {
// 	int	nombre;

// 	nombre = 8;
// 	ft_is_negative(nombre);
// 	return (0);
// }
