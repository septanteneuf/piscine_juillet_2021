/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:58:59 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:52:19 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// void	ft_putstr(char *str);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	printf("%s\n", argv[0]);
// 	ft_putstr(argv[0]);
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
