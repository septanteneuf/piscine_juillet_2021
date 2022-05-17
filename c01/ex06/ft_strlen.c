/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:34:56 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:44:12 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// int		ft_strlen(char *str);
// void	ft_putchar(char c);

// int	main(void)
// {
// 	char	i[] = "Hello Sandrine !";
// 	char	*a;
// 	int		x;

// 	a = i;
// 	x = ft_strlen(a);
// 	printf("%d", x);
// }

}
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}
