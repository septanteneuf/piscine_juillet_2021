/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:43:21 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:52:31 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// void	ft_putstr(char *str);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 1;
// 	(void) argc;
// 	(void) argv;
// 	while (i < argc)
// 	{
// 		ft_putstr(argv[i]);
// 		write(1, "\n", 1);
// 		++i;
// 	}
// }

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
