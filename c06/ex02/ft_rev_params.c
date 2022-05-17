/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 08:32:37 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:52:39 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>

// void	ft_putstr(char *str);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = argc - 1;
// 	(void) argc;
// 	(void) argv;
// 	while (i >= 1)
// 	{
// 		ft_putstr(argv[i]);
// 		write(1, "\n", 1);
// 		i--;
// 	}
// }

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
